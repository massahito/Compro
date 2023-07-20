#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

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
	int N;	

	cin >> N;
	vector<pair<int, int>> Y(N);

	for (int i = 0; i < N; i++)
	{
		int x, l;
		cin >> x >> l; 
		Y[i].first = x - l;
		Y[i].second= x + l;
	}
	sort(Y.begin(), Y.end());
	
	for(int i =0; i < N; i++)
		cout << Y[i].first << " " << Y[i].second << endl;
	int count = 0, r = -1 * 1<<30;
	for (int i = 0; i < N; i++)
	{
		if (r <= Y[i].first)
		{
			count++;
			r = Y[i].second;
		}
		else if (r < Y[i].second)
			r = Y[i].second;
	}
	cout << count << endl;
}
