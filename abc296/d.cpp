#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>

using namespace	std;

int main()
{
	long	N, M;
	long	ans;
	long	i;
	cin >> N >> M;

	i = 1;
	ans = __LONG_MAX__;
	while (i <= N)
	{
		long temp = (M + i - 1) / i;
		if (temp <= N && M <= temp * i && temp * i < ans)
			ans = temp * i;
		if (temp < i)
			break;
		i++;
	}
	if (ans == __LONG_MAX__)
		cout << -1 << endl;
	else
		cout << ans << endl;
	return 0;
}