#include <iostream>
#include <set>
#include <vector>

using namespace std;

long long	dfs(int y, int x, set<long long> S);
int		H, W;
vector<vector<long long>>	A;
int main()
{
	set<long long> S;
	cin >> H >> W;
	A.resize(H);

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			long long a;
			cin >> a;
			A[i].push_back(a);
		}
	}
	cout << dfs(0, 0, S) << endl;
			
}

long long	dfs(int y, int x, set<long long> S)
{
	if (y == H - 1 && x == W - 1)
	{
		if (S.find(A[y][x]) == S.end())
			return (1);
		else
			return (0);
	}
	else if (H <= y || W <= x)
		return (0);
	else if (S.find(A[y][x]) != S.end())
		return (0);
	else
		S.insert(A[y][x]);
	
	int count = 0;
	int xarr[] = {1, 0};
	int yarr[] = {0, 1};
	for (int i = 0; i < 2; i++)
		count += dfs(y + yarr[i], x + xarr[i], S);
	return (count);
}

