#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	int		N, K, Q;
	
	cin >> N >> K;
	vector<vector<int>>	M(N, vector<int> (N, 0));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> M[i][j];
	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		long long s, t;
		queue<int>	que;
		vector<int>	dist(N, -1);

		cin >> s >> t;
		s--;
		t--;
		s %= N;
		t %= N;
		for (int j = 0; j < N; j++)
		{
			if (M[s][j])
			{
				que.push(j);
				dist[j] = 1;
			}
		}
		while (!que.empty())
		{
			int idx = que.front();
			que.pop();
			if (idx == t)
				break;
			for (int j = 0; j < N; j++)
			{
				if (M[idx][j] && dist[j] == -1)
				{
					que.push(j);
					dist[j] = dist[idx] + 1;
				}
			}
		}
		cout << dist[t] << endl;
	}
}

			
		
