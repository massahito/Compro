#include <iostream>
#include <vector>
#define INF 1<<30

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;
	vector<int> c(m);
	vector<int>	dp(n + 1, INF);
	for(int i = 0; i < m; i++)
		cin >> c[i];

	dp[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if (c[j] <= i)
				dp[i] = min(dp[i], dp[i - c[j]] + 1);
		}
	}
	for(int k = 0; k < n; k++)
		cout << dp[k] << " ";
	cout << endl;

	cout << dp[n] << endl;
	
}
