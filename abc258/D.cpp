#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
	long long N, X;

	cin >> N >> X;
	vector<long> A(N), B(N);
	for(int i = 0; i < N; i++)
		cin >> A[i] >> B[i];

	long long ans, time;
	ans = 	LONG_MAX;
	time = 0;
	for(int i = 0; i < N; i++)
	{
		if(X <= i)
			break;
		ans = min(ans, time + A[i] + (X - i) * B[i]);
		time += A[i] + B[i];
	}
	cout << ans << endl;
}
