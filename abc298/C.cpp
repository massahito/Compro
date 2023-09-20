#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
int main(void)
{
	int		N, Q;

	cin >> N >> Q;
	vector<vector<int>>	B(200010);
	vector<set<int>>	C(200010);
	
	for (int k = 0 ; k < Q; k++)
	{
		int n, i;

		cin >> n >> i;
		if (n == 1)
		{
			int j;
			cin >> j;
			B[j].push_back(i);
			C[i].insert(j);
		}
		else if (n == 2)
		{
			sort(B[i].begin(), B[i].end());
			for (auto x : B[i])
				cout << x << " ";
			cout << endl;
		}
		else if (n == 3)
		{
			for (auto x : C[i])
				cout << x << " ";
			cout << endl;
		}
	}
}
			


