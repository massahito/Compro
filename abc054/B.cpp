#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;
	vector<vector<char>> A(N, vector<char> (N));
	vector<vector<char>> B(M, vector<char> (M));

	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			cin >> A[i][j];
	for(int i = 0; i < M; i++)
		for(int j = 0; j < M; j++)
			cin >> B[i][j];
	for(int i = 0; i <= N - M; i++)
	{
		for(int j = 0; j <= N - M; j++)
		{
			bool isgood = true;

			for(int k = i; k < i + M; k++)
				for(int l = j; l < j + M; l++)
					if(A[k][l] != B[k - i][l - j])
						isgood = false;
			if(isgood)
			{
				cout << "Yes" << endl;
				return (0);
			}
		}
	}
	cout << "No" << endl;
}


