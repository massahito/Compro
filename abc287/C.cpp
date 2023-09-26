#include <iostream>
#include <set>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	int		N, M, start = 0;

	cin >> N >> M;
	vector<vector<int>>		G(N);
	for (int i = 0; i < M; i++)
	{
		int u, v;

		cin >> u >> v;
		u--; v--;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	for (int i = 0; i < N; i++)
	{
		if (2 < G[i].size() || N != M + 1)
		{
			cout << "No" << endl;
			return (0);
		}
		if (G[i].size() == 1)
			start = i;
	}
	set<int>	S;
	queue<int>	Q;
	Q.push(start);
	S.insert(start);
	while (!Q.empty())
	{
		int idx = Q.front();
		Q.pop();
		for (auto x : G[idx])
		{
			if (S.find(x) != S.end())
				continue ;
			S.insert(x);
			Q.push(x);
		}
	}
	if (S.size() == N)
	{
		cout << "Yes" << endl;
		return (0);
	}
	else
	{
		cout << "No" << endl;
		return (0);
	}
}
