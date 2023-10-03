#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int		N, X;

	cin >> N >> X;
	vector<int>				A(N), B(N);
	vector<vector<bool>>	dp(N + 1, vector<bool> (X + 1, false));

	for (int i = 0; i < N; i++)
		cin >> A[i] >> B[i];
	dp[0][0] = true;
	for (int i = 0; i < N; i++)
		for (int j = 0; j <= B[i]; j++)
			for (int k = 0; k <= X; k++)
				if (0 <= k - A[i] * j && dp[i][k - A[i] * j])
					dp[i + 1][k] = true;
	if (dp[N][X])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
	

	
