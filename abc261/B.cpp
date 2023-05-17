#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;

	cin >> N;

	vector<vector<int>> M(N, vector<int>(N, 0));
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			char chr;

			cin >> chr;
			if(chr == 'W')
				M[i][j] = 1;
			else if(chr == 'L')
				M[i][j] = -1;
			else
				M[i][j] = 0;
		}
	}

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if((M[i][j] + M[j][i]) != 0)
			{
				cout << "incorrect" << endl;
				return (0);
			}
		}
	}

	cout << "correct" << endl;
}
