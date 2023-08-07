#include <iostream>

using namespace std;

int main()
{
	long long N, A, B;

	cin >> N >> A >> B;

	cout << N / (A + B) * A + min(A, N % (A + B)) << endl;
}
