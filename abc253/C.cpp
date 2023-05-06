#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;
	vector<int> vct(N);
	vector<int, queue<int> > mp(K);

	for(int i = 0; i < N; i++)
		cin >> vct[i];
	for(int i = 0; i < N; i++)
		mp[i % K].push(vct[i]);
	for(int i = 0; i < K; i++)
		sort(mp[i].begin(), mp[i].end());

	int prenum = mp[0].front();
	for(int j = 0; j < N / K + 1; j++)
	{
		for(int i = 0; i < K; i++)
		{
			if(mp[i].empty())
				continue;
			if(mp[i].front() < prenum)
			{
				cout << "No" << endl;
				return 0;
			}
			prenum = mp[i].front();
			mp[i].pop();
		}
	}
	cout << "Yes" << endl;
	return 0;
}
