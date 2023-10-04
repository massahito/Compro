#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;
using Graph = vector<vector<int>>;

bool	dfs(Graph const &G, int index, vector<bool> &seen, vector<bool> &finished)
{
	seen[index] = true;
	for (auto i : G[index])
	{
		if (finished[i])
			continue ;
		if (seen[i] && !finished[i])
			return (true);
		if (dfs(G, i, seen, finished))
			return (true);
	}
	finished[index] = true;
	return (false);
}
			
int main()
{
	int					N;

	cin >> N;

	Graph				G;
	vector<string>		s(N), t(N);
	set<string>			S;

	//input data, and make graph

	for (int i = 0; i < N; i++)
	{
		cin >> s[i] >> t[i];
		S.insert(s[i]);
		S.insert(t[i]);
	}
	G.resize(S.size());
	for (int i = 0; i < N; i++)
	{
		int src = std::distance(S.begin(), S.find(s[i]));
		int dst	= std::distance(S.begin(), S.find(t[i]));
		G[src].push_back(dst);
	}

	//searching cycle

	vector<bool>	seen(S.size(), false), finished(S.size(), false);
	for (int i = 0; i < S.size(); i++)
	{
		if (seen[i])
			continue ;
		if (dfs(G, i, seen, finished))
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
	return (0);
}

