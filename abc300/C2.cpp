#include <iostream>
#include <vector>

using namespace std;
int		dfs(int y, int x);

int		H, W;
vector<vector<char>>	M;
int main()
{
	
	cin >> H >> W;
	vector<int> D(min(H, W), 0);
	M.resize(H);
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			char	chr;
			cin >> chr;
			M[i].push_back(chr);
		}
	}
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			if (M[i][j] == '#')
			{
				int ans;
				ans = dfs(i, j);
				if (0 < ans)
					D[ans - 1]++;
			}
		}
	}
	for (int i = 0; i < min(H, W); i++)
		cout << D[i] << " ";
	cout << endl;
}

int		dfs(int y, int x)
{
	int		yarr[] = {-1, -1, 1, 1};
	int		xarr[] = {-1, 1, -1, 1};
	int		arr[4];

	for (int i = 0; i < 4; i++)
	{
		int		nowy = y + yarr[i];
		int		nowx = x + xarr[i];
		int		count = 0;
		while (0 <= nowx && 0 <= nowy && nowx < W && nowy < H)
		{
			if (M[nowy][nowx] != '#')
				break;
			count++;
			nowx += xarr[i];
			nowy += yarr[i];
		}
		arr[i] = count;
	}
	if (arr[0] == arr[1] && arr[0] == arr[2] && arr[0] == arr[3])
		return (arr[0]);
	else
		return (-1);
}
