#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long		N;

	cin >> N;
	vector<vector<long long>>		dp(N, vector<long long> (2, 0));
	vector<long long>	A(N), B(N);
	for (long long i = 0; i < N; i++)
		cin >> A[i] >> B[i];
	dp[0][0] = 1;
	dp[0][1] = 1;
	for(long long i = 1; i < N; i++)
	{
		if (A[i] != A[i - 1])
			dp[i][0] = (dp[i][0] % 998244353 + dp[i - 1][0] % 998244353) % 998244353 ;
		if (A[i] != B[i - 1])
			dp[i][0] = (dp[i][0] % 998244353 + dp[i - 1][1] % 998244353) % 998244353 ;
		if (B[i] != B[i - 1])
			dp[i][1] = (dp[i][1] % 998244353 + dp[i - 1][1] % 998244353) % 998244353 ;
		if (B[i] != A[i - 1])
			dp[i][1] = (dp[i][1] % 998244353 + dp[i - 1][0] % 998244353) % 998244353 ;
	}
	cout << (dp[N - 1][0] + dp[N - 1][1]) % 998244353  << endl;
}
	
