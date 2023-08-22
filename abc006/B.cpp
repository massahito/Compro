#include <iostream>

using namespace std;

int main()
{
	int		n;
	long long		a1 = 0, a2 = 0, a3 = 1;
	long long		num = 10007;

	cin >> n;

	if(n == 1)
		cout << a1 << endl;
	else if(n == 2)
		cout << a2 << endl;
	else if(n == 3)
		cout << a3 << endl;
	else
	{
		for(int i = 3; i < n; i++)
		{
			long long  tmp = ((a3 + a2) % num  + a1) % num;
			a1 = a2;
			a2 = a3;
			a3 = tmp;
		}
		cout << a3 << endl;
	}
}
	

