#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>

using namespace	std;

int main()
{
	long N, M;
	long ans;
	long	i;
	cin >> N >> M;

	i = 1;
	ans = __LONG_MAX__;
	while (i <= sqrt(M))
	{
		long temp = (M + i - 1) / i;
		if(temp <= N && M <= temp * i && temp * i < ans)
			ans = temp * i;
		i++;
	}
	if (ans != __LONG_MAX__)
		cout << ans << endl;
	else
		cout << -1 << endl;
	return 0;
}