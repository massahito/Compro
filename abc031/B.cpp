#include <iostream>

using namespace std;

bool	dfs(char map[][10], bool mp[][10], int y, int x);

int main()
{
	char map[10][10];

	for(int i = 0; i < 10; i++)
		for(int j = 0; j < 10; j++)
			cin >> map[i][j];
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			bool mp[10][10];
			for(int x = 0; x < 10; x++)
				for(int y = 0; y < 10; y++)
					mp[x][y] = false;
			if (dfs(map, mp, i, j))
			{
				cout << "YES" << endl;
				return (0);
			}
		}
	}
	cout << "No" << endl;
	return (0);
}

bool	dfs(char map[][10], bool mp[][10], int y, int x)
{
	bool ans = true;
	
	//footpoint
	mp[y][x] = true;
	//goal check
	for(int i = 0; i < 10; i++)
		for(int j = 0; j < 10; j++)
			if(map[i][j] == 'o' && !mp[i][j])
				ans = false;
	if (ans)
		return (ans);
	if (0 <= y - 1 && !mp[y - 1][x] && map[y - 1][x] == 'o')
		ans = ans | dfs(map, mp, y - 1, x);
	if (y + 1 < 10 && !mp[y + 1][x] && map[y + 1][x] == 'o')
		ans = ans | dfs(map, mp, y + 1, x);
	if (0 <= x - 1 && !mp[y][x - 1] && map[y][x - 1] == 'o')
		ans = ans | dfs(map, mp, y, x - 1);
	if (x + 1 < 10 && !mp[y][x + 1] && map[y][x + 1] == 'o')
		ans = ans | dfs(map, mp, y, x + 1);
	return (ans);
}
