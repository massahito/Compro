#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
int main()
{
	int N;

	cin >> N;
	vector<pair<int, int>> B(N);
	for(int i = 0; i < N; i++)
		cin >> B[i].first >> B[i].second;
	sort(B.begin(), B.end());
	
	vector<vector<int>> dp(N, vector<int> (N, 0));
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			dp[i][j] = max(dp[i - 1])


