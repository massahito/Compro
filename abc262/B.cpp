#include <iostream>

using namespace std;

int main()
{
	int N, M, count = 0;
	int G[100][100] = {0};

	cin >> N >> M;

	for(int i = 0; i < M; i++)
	{
		int u, v;

		cin >> u >> v;
		G[u - 1][v - 1] = 1;
		G[v - 1][u - 1] = 1;
	}

	for(int i = 0; i < N; i++)
		for(int j = i + 1; j < N; j++)
			for(int k = j + 1; k < N; k++)
				if(G[i][j] && G[j][k] && G[i][k])
					count++;
	cout << count << endl;
}
