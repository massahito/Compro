#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;
	int ans = n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j * i <= n; j++)
			ans = min(ans, abs(i - j) + n - i * j);	
	cout << ans << endl;
}
