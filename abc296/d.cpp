#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>

using namespace	std;

int main()
{
	long long N, M, S;
	long long	i;
	cin >> N >> M;

	S = sqrtl(M);
	cout << S << endl;
	if (N < S)
	{
		cout << -1 << endl;
		return -1;
	}
	i = 1;
	while (i <= N)
	{
		if(M <= i * S)
		{
			cout << i * S << endl;
			return 0;
		}
		i++;
	}
	cout << -1 << endl;
	return -1;
}