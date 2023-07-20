#include <iostream>
#include <vector>
#define INF 1<<30

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;
	vector<int> c(m + 1);
	vector<vector<int>>	dp(n + 1, vector<int> (m + 1, INF));
	c[0] = 0;
	dp[0][0] = 0;
	for(int i = 1; i <= m; i++)
	{
		dp[0][i] = 0;
		cin >> c[i];
	}
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			if (c[j] + i <= n)
			{

				dp[i + c[j]][j] = min(dp[i + c[j]][j], dp[i][j] + 1);
				if (c[j] + i <= n && 0 < j)
					dp[i + c[j]][j] = min(dp[i + c[j]][j], dp[i][j - 1] + 1);
			}
			else
				dp[i][j] = 0;
		}
	}
	for(int k = 0; k < n; k++)
	{
		for(int l = 0; l < m; l++)
			cout << dp[k][l] << " ";
		cout << endl;
	}
	cout << dp[n][m] << endl;
	
}
