#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	int count  = 0;

	cin >> N >> M;
	vector<int> L(N);
	vector<vector<int>> mp(N, vector<int> (N, 0));

	for(int i = 0; i < M; i++)
	{
		for(int j = 0; j < N; j++)
		{
			int l;
			cin >> l;
			l--;
			L[j] = l;
		}
		for(int j = 1; j < N; j++)
		{
			mp[L[j]][L[j - 1]] = 1;
			mp[L[j - 1]][L[j]] = 1;
		}
	}
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(i == j)
				continue;
			if(i < j && mp[i][j] == 0)
				count++;
		}
	}
	cout << count << endl;
}

