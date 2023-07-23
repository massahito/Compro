#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<vector<int>> A(N);
	for(int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	for(int i = 0; i < N; i++)
	{
		sort(A[i].begin(), A[i].end());
		cout << A[i].size() << " ";
		for(auto x: A[i])
			cout << x + 1 << " ";
		cout << endl;
	}
}
