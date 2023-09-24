#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int	N, X;
	int sum = 0;

	cin >> N >> X;
	vector<int>	A(N - 1);
	for (int i = 0; i < N - 1; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	for (int i = 0; i < N - 1; i++)
		sum += A[i];
	if (X <= sum - A[N - 2])
	{
		cout << 0 << endl;
	}
	else
	{
		int ans = sum - A[0] - A[N - 2];
		if (X - ans <= A[N - 2])
			cout << X - ans << endl;
		else
			cout << -1 << endl;
	}
}
