#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int X;
	int ans = 1;
	int diff = 1<<30;

	cin >> X;
	for(int b = 1; b <= 1000; b++)
	{
		for(int p = 2; p <= 10; p++)
		{
			if(X < pow(b, p))
				break;
			if(abs(X - pow(b, p)) < diff)
			{
				ans = pow(b, p);
				diff = abs(X - ans);
			}
		}
	}
	cout << ans << endl;
}
				

