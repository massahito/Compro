#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	long long	N, M, P, sum = 0;

	cin >> N >> M >> P;
	vector<long long> A(N), B(M), F(M + 1);
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < M; i++)
		cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	F[0] = 0;
	for (int i = 0; i < M; i++)
		F[i + 1] = F[i] + B[i];
	int idx = M - 1;
	for (int i = 0; i < N; i++)
	{
		while (0 <= idx && P <= A[i] + B[idx])
			idx--;
		sum += (A[i] * (idx + 1) + F[idx + 1] + P * (M - max(idx + 1, 0)));
	}
	cout << sum << endl;
}
	
