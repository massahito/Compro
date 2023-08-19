#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;
	vector<vector<int>> V(N);

	for(int i = 0; i < M; i++)
	{
		int a, b;

		cin >> a >> b;
		a--;
		b--;
		V[a].push_back(b);
		V[b].push_back(a);
	}
	for(int i = 0; i < N; i++)
		cout << V[i].size() << endl;
}
