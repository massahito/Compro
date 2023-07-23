#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;
	vector<set<int>> K(N);

	for(int i = 0; i < M; i++)
	{
		int k, n;
		cin >> k;
		for(int j = 0; j < k; j++)
		{
			cin >> n;
			n--;
			K[n].insert(i);
		}
	}
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			bool isgood = false;
			if(i <= j)
				continue;
			for(auto x : K[j])
				if(K[i].find(x) != K[i].end())
					isgood = true;
			if(!isgood)
			{
				cout << "No" << endl;
				return (0);
			}
		}
	}
	cout << "Yes" << endl;
}



