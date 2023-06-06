#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int N, Q;

	cin >> N;
	cin >> Q;

	vector<map<int, int>> box(N);
	vector<map<int, int>> nums(N);

	for(int k = 0; k < Q; k++)
	{
		int query;

		cin >> query;
		if(query == 1)
		{
			int i, j;
			cin >> i >> j;
			box[j][i] += 1;
			nums[i][j] += 1;
		}
		else if(query == 2)
		{
			int i;
			cin >> i;
			for(map<int, int>::iterator x: box[i].begin())
			{
				int a = x.second;
				while(a)
				{
					cout << x.first << endl;
					a--;
				}
			}
		}
	}
}
