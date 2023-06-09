#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	int N, M, X;
	int price = INT_MAX;

	cin >> N >> M >> X;
	vector<int> C(N, 0);
	vector<vector<int>> A(N, vector<int>(M, 0));

	for(int i = 0; i < N; i++)
	{
		cin >> C[i];
		for(int j = 0; j < M; j++)
			cin >> A[i][j];
	}

	for(int i = 0; i <= pow(2, N); i++)
	{
		int bit[N] = {0};
		vector<int> U(M, 0);
		bool	flag = true;
		int		tmp = 0;

		for(int j = 0; j < N; j++)
		{
			int div = 1 << j;
			bit[j] = (i / div) % 2;
		}
		for(int j = 0; j < N; j++)
		{
			if(bit[j])	
			{
				for(int k = 0; k < M; k++)
				{
					U[k] += A[j][k];
				}
				tmp += C[j];
			}
		}
		
		for(int j = 0; j < M; j++)
			if(U[j] < X)
				flag = false;
		if(flag)
			price = min(price, tmp);
	}
	if(price == INT_MAX)
		cout << -1 << endl;
	else
		cout << price << endl;
}
	

