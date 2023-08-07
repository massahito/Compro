#include <iostream>

using namespace std;

int main()
{
	int A, B, C, K;
	int ans = 0;

	cin >> A >> B >> C >>K;
	ans += min(A, K);
	K = max(K - A, 0);
	K = max(K - B, 0);
	ans -= min(K, C);
	cout << ans << endl;
}

	
