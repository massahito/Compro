#include <iostream>

using namespace std;

int main()
{
	long long	N, A, B;
	long long	sum;

	cin >> N >> A >> B;
	if(A != B)
		sum = (N + 1) * N / 2 - (A + N - N % A) * (N / A) / 2 - (B + N - N % B) * (N / B) / 2 + (A * B + N - N % (A * B)) * (N / (A * B)) / 2;
	if(A == B)
		sum = (N + 1) * N / 2 - (A + N - N % A) * (N / A) / 2;
	cout << sum << endl;
}

