#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long A, B;

	cin >> A >> B;

	printf("%lld\n",(long long)(pow(A, B) + pow(B, A)));
	return 0;
}
