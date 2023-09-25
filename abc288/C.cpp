#include <iostream>
#include <set>
#include <queue>
#include <vector>


using namespace std;

int main()
{
	int			N, M, count = 0;
	set<int>	S;

	cin >> N >> M;
	vector<vector<int>>	G(N);

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	
	for (int i = 0; i < N; i++)
	{
		if (S.find(i) != S.end())
			continue ;
		queue<int>	Q;
		Q.push(i);
		count++;
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
	}
	cout << M - N + count << endl;
}
	
