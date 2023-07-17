#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <set>

using namespace std;
using node = pair<int, int>;

const int INF = 1<<29;
const vector<int> dy = {-1, 0, 1, 0};
const vector<int> dx = {0, -1, 0, 1};

int main()
{
	int H, W;

	cin >> H >> W;

	vector<vector<char>> mp(H, vector<char> (W));
	vector<vector<int>> check(H, vector<int> (W, INF));
	node start, goal;
	deque<node> que;

	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			cin >> mp[i][j];
			if (mp[i][j] == 's')
				start = make_pair(i, j);
			if (mp[i][j] == 'g')
				goal = make_pair(i, j);
		}
	}
	que.push_front(start);
	check[start.first][start.second] = 0;

	while(!que.empty())
	{
		node  now = que.front();
		que.pop_front();
		for(int i = 0; i < 4; i++)
		{
			int y = now.first + dy[i];
			int x = now.second + dx[i];
			
			cout << x << " " << y << endl;
			if (x < 0 || y < 0 || W <= x || H <= y)
				continue;
			if (mp[y][x] == '#' && check[now.first][now.second] + 1 < check[y][x])
			{
				check[y][x] = check[now.first][now.second] + 1;
				que.push_back(node(y, x));
			}
			else if (check[now.first][now.second] < check[y][x])
			{
				check[y][x] = check[now.first][now.second];
				que.push_front(node(y, x));
			}
		}
	}
	if (check[goal.first][goal.second] <= 2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
}

