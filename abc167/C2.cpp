#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int main()
{
	int N, M, X;
	int ans = INT_MAX;

	cin >> N >> M >> X;
	vector<int> C(N);
	vector<vector<int>> A(N, vector<int> (M, 0));

	for(int i = 0; i < N; i++)
	{
		cin >> C[i];
		for(int j = 0; j < M; j++)
			cin >> A[i][j];
	}

	for(int i = 0; i < (1<<N); i++)
	{
		int price = 0;
		vector<int> B(M, 0);
	
		for(int j = 0; j < N; j++)
		{
			if(i & (1<<j))	
			{
				price += C[j];
				for(int k = 0; k < M; k++)
					B[k] += A[j][k];
			}
		}
		bool flag = true;
		for(auto x : B)
			if(x < X)
				flag = false;
		if(flag)
			ans = min(ans, price);
	}
	if(ans == INT_MAX)
		cout << -1 << endl;
	else
		cout << ans << endl;

}
