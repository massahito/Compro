#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int main()
{
	int			N, M;
	set<int>	S;

	cin >> N >> M;

	vector<vector<int>>		G(N);
	for (int i = 0; i < M; i++)
	{
		int		u,  v;

		cin >> u >> v;
		u--; v--;
		G[u].push_back(v);
		if (u != v)
			G[v].push_back(u);
	}

	for (int i = 0; i < N; i++)
	{
		
		if (S.find(i) != S.end())
			continue;
		queue<int>	Q;
		int			choten = 0;
		int			hen = 0;
		Q.push(i);
		S.insert(i);
		while (!Q.empty())
		{
			int idx = Q.front();
			Q.pop();
			choten++;
			for (auto x : G[idx])
			{
				if (S.find(x) == S.end())
				{
					cout << idx << ": " << x << endl;
					hen++;
				}
			}
			for (auto x : G[idx])
			{	
				if (S.find(x) != S.end())
					continue;
				S.insert(x);
				Q.push(x);
			}
		}
		if (choten != hen)
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}
		
