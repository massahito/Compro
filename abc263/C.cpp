#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<int> vct, int n, int N, int M);

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> vct(N);

	dfs(vct, 0, N, M);
}

void dfs(vector<int> vct, int n, int N, int M)
{
	int start;
	if(vct.size() == N)
	{
		for(int i = 0; i < N; i++)
			cout << vct[i] << " ";
		cout << endl;
		return ;
	}

	if(n == 0)
		start = 1;
	else
		start = vct[n - 1] + 1;
	for(int i = start; i <= M; i++)
		dfs(vct, n + 1, N, M);
	return ;
}
