#include <iostream>
#include <vector>

using namespace std;
int		search(int base, int left, int right);

vector<int> A, F;
int	main()
{
	int		N, Q;
	int		sum = 0;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int		a;
		cin >> a;
		A.push_back(a);
		if (i != 0 && i % 2 == 0)
			sum += (A[i] - A[i - 1]);
		F.push_back(sum);
	}
	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		int l, r;

		cin >> l >> r;
		cout << search(r, 0, N - 1) - search(l, 0, N - 1) << endl;
	}
}


int		search(int base, int left, int right)
{
	int ans;
	while (right - left > 1)
	{
		int		mid = (left + right) / 2;

		if (A[mid] <= base)
			left = mid;
		else
			right = mid;
	}
	ans = F[left];
	if (left % 2)
		ans += (base - A[left]);
	return (ans);
}
			
