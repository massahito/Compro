#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;

bool	dfs(vector<vector<int>> G, set<int> &S, int num, int parent);
int main()
{
	int N, M;
	int	count = 0;
	set<int> S;

	cin >> N >> M;
	
	vector<vector<int>> G(N);
	for(int i = 0; i < M; i++)
	{
		int u, v;
		
		cin >> u >> v;
		u--;
		v--;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	for(int i = 0; i < N; i++)
		if (dfs(G, S, i, -1))	
			count++;
	cout << count << endl;
}


bool	dfs(vector<vector<int>> G, set<int> &S, int num, int parent)
{
	if (S.find(num) != S.end())	
		return (false);
	S.insert(num);
	for(auto x: G[num])
	{
		if(x == parent)	
			continue;
		if(!dfs(G, S, x, num))
			return (false);
	}
	return (true);
}
