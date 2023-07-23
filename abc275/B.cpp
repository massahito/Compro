#include <iostream>

using namespace std;
const long long mod = 998244353;
int main()
{
	long long A, B, C, D, E, F;
	long long x, y, ans;

	cin >> A >> B >> C >> D >> E >> F;
	
	x = ((A % mod) * (B % mod)) % mod;
	x = (x * (C % mod)) % mod;
	y = ((D % mod) * (E % mod)) % mod;
	y = (y * (F % mod)) % mod;

	cout << (x + mod - y) % mod << endl;
}
