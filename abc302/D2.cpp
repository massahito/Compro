#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	long long	N, M, D;

	cin >> N >> M >> D;
	vector<long long>	A(N), B(M);

	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < M; i++)
		cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	
	int a = N - 1, b = M - 1;
	while(true)
	{
		if(a < 0 || b < 0)
		{
			cout << -1 << endl;
			return (0);
		}
		else if (abs(A[a] - B[b]) <= D)
		{
			cout << A[a] + B[b] << endl;
			return (0);
		}
		else if (A[a] < B[b])
			b--;
		else
			a--;
	}
}
