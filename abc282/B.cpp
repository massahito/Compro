#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int N, M, count = 0;
	cin >> N >> M;
	vector<string> S(N);

	for(int i = 0; i < N; i++)
		cin >> S[i];
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			bool isgood = true;
			if(i <= j)
			 continue;
			for(int k = 0; k < M; k++)
				if(S[i][k] == 'x' && S[j][k] == 'x')
					isgood  = false;
			if(isgood)
				count++;
		}
	}
	cout << count << endl;
}
