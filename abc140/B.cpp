#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, count = 0;

	cin >> N;
	vector<int> A(N), B(N), C(N);

	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < N; i++)
		cin >> B[i];
	for(int i = 0; i < N - 1; i++)
		cin >> C[i];
	for(int i = 0; i < N; i++)
	{
		count += B[A[i] - 1];
		if(i + 1 < N && A[i] + 1 == A[i + 1])
			count += C[A[i] - 1];
	}
	cout << count << endl;
}
