#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	long long	N, D, P;
	long long	ans = 0;

	cin >> N >> D >> P;
	vector<long long> F(N), C(N);

	for(int i = 0; i < N; i++)
		cin >> F[i];
	sort(F.begin(), F.end());
	for(int i = 0; i < N; i++)
	{
		if(i == 0)
			C[i] = F[i];
		else
			C[i] = C[i - 1] + F[i];
	}
	if(N % D)
		ans = P * (N / D + 1);
	else
		ans = P * (N / D);
	for(int i = 0; i < N; i++)
	{
		int tmp = N - i - 1;
		if(tmp % D)
			tmp = tmp / D + 1;
		else
			tmp = tmp / D;
		ans = min(ans, C[i] + tmp * P);
	}
	cout << ans << endl;
}
		
