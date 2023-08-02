#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	long long sum = 0;

	cin >> N;
	vector<long long> A(N), B(N);
	for(int i = 0; i < N; i++)
		cin >> A[i] >> B[i];

	for(int i = 0; i < N; i++)
		sum += (B[i] + A[i]) * (B[i] - A[i] + 1) / 2;
	cout << sum << endl;
}


