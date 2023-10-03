#include <iostream>
#include <iterator>
#include <string>
#include <set>
#include <vector>

using namespace std;
bool	dfs(vector<vector<int>> &G, set<int> &S1, int index);
int main()
{
	int		N;

	cin >> N;

	vector<vector<int>>		G(N * 2);
	set<string>				S;
	set<int>				S1;

	for (int i = 0; i < N; i++)
	{
		string	s1, s2;
		int		g1, g2;
		cin >> s1 >> s2;
		g1 = std::distance(S.begin(), S.find(s1));
		if (S.find(s1) == S.end())
			S.insert(s1);
		g2 = std::distance(S.begin(), S.find(s2));
		if (S.find(s2) == S.end())
			S.insert(s2);
		G[g1].push_back(g2);
		cout << g1 << " " << g2 << endl;
	}
	G.resize(S.size());
	for (int i = 0; i < G.size(); i++)
	{
		if (S1.find(i) != S1.end())	
			continue ;
		if (dfs(G, S1, i))
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}

bool	dfs(vector<vector<int>> &G, set<int> &S1, int index)
{
	bool answer = false;
	S1.insert(index);
	for (auto i : G[index])
	{
		if (S1.find(i) != S1.end())
		{
			cout << i << endl;
			return (true);
		}
		if (dfs(G, S1, i))
			answer = true;
	}
	return (answer);
}


