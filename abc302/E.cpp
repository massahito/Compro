#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int N, Q;

	cin >> N >> Q;
	vector<set<int>> S(N);

	for(int i = 0; i < Q; i++)
	{
		int q;

		cin >> q;
		if(q == 1)
		{
			int a, b;

			cin >> a >> b;
			S[a].insert(b);
			S[b].insert(a);
		}
		else
		{
			S[a].insert()
		}
}
