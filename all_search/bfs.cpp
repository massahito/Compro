#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<vector<int>> G(N);
	queue<int> Q;
	set<int> S;
	vector<int> A(N, -1);

	for(int i = 0; i < N; i++)
	{
		int u, k, v;
		cin >> u >> k;
		u--;
		for(int j = 0; j < k; j++)
		{
			cin >> v;
			v--;
			G[u].push_back(v);
		}
	}
	
	Q.push(0);
	A[0] = 0;
	while(!Q.empty())
	{
		int a = Q.front();
		Q.pop();
		for(int i = 0; i < G[a].size(); i++)
		{
			if(S.find(G[a][i]) != S.end())
				continue;
			A[G[a][i]] = A[a] + 1;
			S.insert(G[a][i]);
			Q.push(G[a][i]);
		}
	}
	for(int i = 0; i < N; i++)
		cout << i + 1 << " "<< A[i] << endl;

}
	
