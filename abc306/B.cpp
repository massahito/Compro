#include <iostream>
#include <vector>

using namespace std;
int main()
{
	unsigned long long ans = 0, sep = 1;

	for(int i = 0; i < 64; i++)
	{
		int a;
		cin >> a;
		ans += a*sep;
		sep*=2;
	}
	cout << ans << endl;
}
	

