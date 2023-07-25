#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <string>

using namespace std;
int N;
int x[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int y[] = {1, 1, 1, 0, 0, -1, -1, -1};

int main()
{
	long long ans = 0;

	cin >> N;
	vector<vector<char>> A(N, vector<char> (N, 0));
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			cin >> A[i][j];

	for(int k = 0; k < N; k++)
	{
		for(int l = 0; l < N; l++)
		{
			
			for(int i = 0; i < 8; i++)
			{
				long long tmp = 0;
				int Y = k;
				int X = l;
	
				for(int j = 0; j < N; j++)	
				{
					if(X < 0)
						X += N;
					if(Y < 0)
						Y += N;
					if(N <= X)
						X %= N;
					if(N <= Y)
						Y %= N;
					tmp = tmp * 10 + (A[Y][X] - '0');
					Y += y[i];
					X += x[i];
				}
				ans = max(ans, tmp);
			}
		}
	}
	cout << ans << endl;				
}

