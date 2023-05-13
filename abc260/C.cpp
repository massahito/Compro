#include <iostream>

using namespace std;

int main()
{
	int N, X, Y;
	long long R[10] = {0}, B[10] = {0};

	cin >> N >> X >> Y;

	R[N - 1] = 1;
	N--;
	while(N)
	{
		B[N] += R[N] * X;
		R[N - 1] += R[N];
		R[N - 1] += B[N];
		B[N - 1] += B[N] * Y;
		N--;
	}
	cout << B[0] << endl;
}


