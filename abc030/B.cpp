#include <iostream>

using namespace std;

int main()
{
	double n, m;
	double ans;

	cin >> n >> m;

	if(12 <= n)
		n -= 12;
	n = (n / 12 + m / 720) * 360;
	m = m / 60 * 360;
	ans = max(n, m) - min(n, m);
	cout << min(ans, 360 - ans) << endl;
}

		

