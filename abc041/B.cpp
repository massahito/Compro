#include <iostream>

using namespace std;

int main()
{
	long long A, B, C;
	long long num = 1000000007;

	cin >> A >> B >> C;

	cout << (((A * B) % num) * C) % num << endl;
}
