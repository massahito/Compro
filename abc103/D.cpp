#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
	if (a.second != b.second)
		return (a.second < b.second);
	else
		return (a.first < b.first);
}

int main()
{
	int N, M;

	cin >> N >> M;
	vector<pair<int, int>> B(M);
	for(int i = 0; i < M; i++)
		cin >> B[i].first >> B[i].second;
	sort(B.begin(), B.end(), compare_by_b);
	int count = 0, r = -1 * 1<<30;
	for(int i = 0; i < M; i++)
	{
		if (r <= B[i].first)
		{
			count++;
			r = B[i].second;
		}
	}
	cout << count << endl;
}

