#include <iostream>

using namespace std;

int main()
{
	int		T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		long long x1, x2, x3, a;

		cin >> x1 >> x2 >> x3;
		a = (x1 + x2 + x3) / 3;
		if (x1 == x2 && x1 == x3)
		{
			cout << 0 << endl;
			continue;
		}
		else if ((x1 + x2 + x3) % 3)
		{
			cout << -1 << endl;
			continue ;
		}
		else if (a % 2 != x1 % 2 || a % 2 != x2 % 2 || a % 2 != x3 % 2)
		{
			cout << -1 << endl;
			continue ;
		}
		else
			cout << (abs(a - x1) + abs(a - x2) + abs(a - x3)) / 4 << endl;
	}
}
		



