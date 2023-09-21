#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
	long long	L;
	int			N1, N2;

	cin >> L >> N1 >> N2;

	vector<pair<long long, long long>>	L1(N1), L2(N2);
	for (auto &&[l, v] : L1)
		cin >> v >> l;

	for (auto &&[l, v] : L2)
		cin >> v >> l;

	int			idx1 = 0, idx2 = 0;
	long long	count = 0, p = 0, q = 0;
	while (idx1 < N1  && idx2 < N2)
	{
		if (L1[idx1].second == L2[idx2].second)
			count += min(p + L1[idx1].first, q + L2[idx2].first) - max(p, q);
		if (p + L1[idx1].first < L2[idx2].first + q)
		{
			p += L1[idx1].first;
			idx1++;
		}
		else
		{
			q += L2[idx2].first;
			idx2++;
		}
	}
	cout << count << endl;
}

