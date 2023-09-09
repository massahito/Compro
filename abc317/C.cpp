#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int		N, M;
	int		ans = 0;

	cin >> N >> M;
	vector<vector<int>>	V(N, vector<int> (N, 0));
	vector<int>			P(N);
	for(int i = 0; i < N; i++)
		P[i] = i;
	for(int i = 0; i < M; i++)
	{
		int a, b, c;

		cin >> a >> b >> c;
		a--;
		b--;
		V[a][b] = c;
		V[b][a] = c;
	}
	do
	{
		int count = 0;
		for(int i = 0; i < N - 1; i++)
		{
			if(V[P[i]][P[i + 1]] == 0)
				break;
			count += V[P[i]][P[i + 1]];
		}
		ans = max(ans, count);
	} while(next_permutation(P.begin(), P.end()));
	cout << ans << endl;
}
			
	

