#include <iostream>

using namespace std;

int main()
{
	long long  N;

	cin >> N;

	if (N % 998244353 == 0)
		cout << 0 << endl;
	else if(998244353 <= N)
		cout << N - ((N / 998244353) * 998244353) << endl;
	else
		cout << N - ((N / 998244353 - 1) * 998244353) << endl;
	return 0;
}
