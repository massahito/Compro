#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int X;

	cin >> X;

	vector<bool> dp(X + 1, false);

	
	for(int i = 1; i <= X; i++)
	{
		if(100 <= i && i <= 105)
			dp[i] = true;
		if(105 < i && (dp[i - 100] || dp[i - 101] || dp[i - 102] || dp[i - 103] || dp[i - 104] || dp[i - 105]))
			dp[i] = true;
	}
	if(dp[X])
		cout << 1 << endl;
	else
		cout << 0 << endl;
}
