#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	int count = 0;

	cin >> N >> M;
	vector<int> P(N);
	vector<vector<int>> G(N, vector<int> (N, 0));

	for(int i = 0; i < N; i++)
		P[i] = i;
	for(int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		G[a][b] = 1;
		G[b][a] = 1;
	}
	do
	{
		if(P[0] != 0)
			break;
		bool flag = true;
		for(int i = 0; i < N - 1; i++)
			if(!G[P[i]][P[i + 1]])
				flag = false;
		if(flag)
			count++;
				
	}while(next_permutation(P.begin(), P.end()));
		
	cout << count << endl;
}
