#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(void)
{
	int		N;

	cin >> N;
	vector<pair<long long, long long>> ab(N);
	vector<int> P(N, 0);
	
	for(int i = 0; i < N; i++)
	{
		long long	a, b;

		cin >> a >> b;
		ab[i]= make_pair(a, a + b);
		P[i] = i;
	}
	auto func = [&] (int i, int j)
	{
		return((ab[i].first * ab[j].second > ab[j].first * ab[i].second));
	};
	stable_sort(P.begin(), P.end(), func);
	for(int i = 0; i < N; i++)
		cout << P[i] + 1 << " ";
	cout << endl;
}
