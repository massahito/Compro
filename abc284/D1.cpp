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
	vector<string>			S;

	for (int i = 0; i < N; i++)
	{
		string	s1, s2;
		int		g1 = -1, g2 = -1;
		cin >> s1 >> s2;
		for(int j = 0; j < S.size(); j++)
			if (S[j] == s1)
				g1 = j;
		if (g1 < 0)
		{
			g1 = S.size();
			S.push_back(s1);
		}
		for(int j = 0; j < S.size(); j++)
			if (S[j] == s2)
				g2 = j;
		if (g2 < 0)
		{
			g2 = S.size();
			S.push_back(s2);
		}
		G[g1].push_back(g2);
	}
	G.resize(S.size());
	for (int i = 0; i < G.size(); i++)
	{
		set<int>				S1;
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
			return (true);
		if (dfs(G, S1, i))
			answer = true;
	}
	return (answer);
}


