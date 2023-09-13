#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int		N;

	cin >> N;
	vector<long long> X(N), Y(N);
	vector<vector<long long>> dp(2, vector<long long> (N, -4e18));

	for(int i = 0; i < N; i++)
		cin >> X[i] >> Y[i];

	if (X[0] == 0)
	{
		dp[0][0] = Y[0];
	}
	else
	{
		dp[1][0] = Y[0];
		dp[0][0] = 0;
	}
	for(int i = 1; i < N; i++)
	{
		if (X[i] == 0)
			dp[0][i] = max(dp[0][i - 1], max(dp[0][i - 1], dp[1][i -1]) + Y[i]);
		else
			dp[1][i] = max(dp[0][i - 1] + Y[i], dp[1][i - 1]);
		dp[1][i] = max(dp[1][i], dp[1][i - 1]);
		dp[0][i] = max(dp[0][i], dp[0][i - 1]);
	}
	cout << max(dp[0][N - 1], dp[1][N - 1]) << endl;
}
