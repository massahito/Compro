#include <iostream>
#include <vector>


using namespace std;

int main()
{
	int D, G;

	cin >> D >> G;
	vector<int> p(D), c(D);
	vector<vector<int>> dp(D + 1, vector<int> (100100, 0));
	for(int i = 0; i < D; i++)
		cin >> p[i] >> c[i];
	dp[0][0] = 0;
	for(int i = 1; i <= D; i++)
	{
		for(int  j = 0; j < 100100; j++)
		{
			for (int k = 0; k < )
			dp[i][j] = max(dp[i -1][k - 1] + p[i], dp[i][j])
	
}
