#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
int main()
{
	int N, M;

	cin >> N >> M;
	
	vector<set<int>> D(N);
	vector<int> P(N);
	int	count = 0;

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		D[a].insert(b);
		D[b].insert(a);
	}
	for (int i = 0; i < N; i++)
		P[i] = i;
	do
	{
		bool is_path = true;
		if (P[0] != 0)
			break;
		for(int i = 1; i < N; i++)
			if (D[P[i - 1]].find(P[i]) == D[P[i - 1]].end())
				is_path = false;
		if (is_path)
			count++;

	} while(next_permutation(P.begin(), P.end()));
	cout << count << endl;
}
