#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	long long	N, sum = 0, ans = 0;

	cin >> N;
	vector<long long> A(N);
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		sum += A[i];
	}
	sort(A.rbegin(), A.rend());
	for(int i = 0; i < N; i++)
	{
		if(i < sum % N)
			ans += abs(sum / N + 1 - A[i]);
		else
			ans += abs(sum / N - A[i]);
	}
	cout << ans / 2 << endl;
}
	
