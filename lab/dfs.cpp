#include <iostream>
#include <vector>

using namespace std;
bool	start_dfs(vector<vector<char>> c, int y, int x, vector<vector<bool>> check);

int main()
{
	int H, W;
	bool ans;

	cin >> H >> W;
	vector<vector<char>>	c(H, vector<char> (W));
	vector<vector<bool>>	check(H, vector<bool> (W, false));

	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> c[i][j];

	cout << c.size() << endl;
	cout << c[1].size() << endl;
	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			if (c[i][j] == 's')
				ans = start_dfs(c, i, j, check);
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

bool	start_dfs(vector<vector<char>> c, int y, int x, vector<vector<bool>> check)
{
	bool	ans = false;
	
	check[y][x] = true;
	if (c[y][x] == 'g')
		return (true);
	if (c[y][x] == '#') 
		return (false);
	if (0 <= y - 1 && !check[y - 1][x])
		ans  = ans | start_dfs(c, y - 1, x, check);
	if (y + 1 < c.size() && !check[y + 1][x])
		ans  = ans | start_dfs(c, y + 1, x, check);
	if (0 <= x - 1 && !check[y][x - 1])
		ans = ans | start_dfs(c, y,  x - 1, check);
	if (x + 1 < c[y].size() && !check[y][x + 1])
		ans = ans | start_dfs(c, y, x + 1, check);
	return (ans);
}
