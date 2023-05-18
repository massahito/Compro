#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
	int N;
	int cnt;
	vector< pair<int, int> > A;

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		int L, R;
		cin >> L >> R;
		A.push_back(make_pair(L, 0));
		A.push_back(make_pair(R, 1));
	}
	sort(A.begin(), A.end());
	for(int i = 0; i < N * 2; i++)
		cout << A[i].first << A[i].second << endl;
	cnt = 0;
	for(int i = 0; i < N * 2; i++)
	{
		if(A[i].second == 0)
		{
			if(cnt == 0)
				cout << A[i].first << " ";
			cnt++;
		}
		else
		{
			cnt--;
			if(cnt == 0)
				cout << A[i].first << endl;
		}
	}
}

