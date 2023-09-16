#include <iostream>
#include <climits>
#include <vector>
#include <map>
#include <utility>
#include <set>
#include <queue>

using namespace std;


int main()
{
	long long		N, M;
	cin >> N >> M;

	vector<long long> Ax(N, INT_MIN), Ay(N, INT_MIN);
	vector<vector<long long>> G(N);
	queue<long long>			que;
	set<long long>			S;
	map<pair<long long, long long>, pair<long long, long long>> mp;

	for (long long i = 0; i < M; i++)
	{
		long long a, b, x, y;
		cin >> a >> b >> x >> y;
		a--;
		b--;
		mp[make_pair(a, b)]	= make_pair(x, y);
		mp[make_pair(b, a)]	= make_pair(-x, -y);
		G[a].push_back(b);
		G[b].push_back(a);
	}
	Ax[0] = 0;
	Ay[0] = 0;
	que.push(0);
	S.insert(0);
	while (!que.empty())
	{
		long long focus = que.front();
		que.pop();
		for (auto f : G[focus])
		{
			if (S.find(f) == S.end())	
			{
				if (mp.find(make_pair(focus, f)) != mp.end())
				{
					Ax[f] = Ax[focus] + mp[make_pair(focus, f)].first;
					Ay[f] = Ay[focus] + mp[make_pair(focus, f)].second;
				}
				else
				{
					Ax[f] = Ax[focus] + mp[make_pair(f, focus)].first;
					Ay[f] = Ay[focus] + mp[make_pair(f, focus)].second;
				}
				S.insert(f);
				que.push(f);
			}
		}
	}
	for (long long i = 0; i < N; i++)
	{
		if (Ax[i] != INT_MIN && Ay[i] != INT_MIN)
			cout << Ax[i] << " " << Ay[i] << endl;
		else
			cout << "undecidable" << endl;
	}
}
		

		
	
