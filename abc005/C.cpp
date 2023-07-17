#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <set>

using namespace std;

int main()
{
	int H, W;

	cin >> H >>W;

	vector<vector<int>> mp(H, vector<int> (W));
	vector<vector<int>> check(H, vector<int> (W, 0));
	pair<int, int> start, goal;
	queue<pair<int, int>> que;
	set<pair<int, int>> S;

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

	que.push(start);
	
	check[start.first][start.second] = 0;
	while(!que.empty())
	{
		pair<int, int> now = que.front();
		que.pop();
		if (now == goal)
		{
			cout << "YES" << endl;
			return (0);
		}

		if (0 <= now.first - 1 && S.find(make_pair(now.first - 1, now.second)) == S.end())
		{
			if (mp[now.first - 1][now.second] == '.')
			{
				que.push(make_pair(now.first - 1, now.second));
				check[now.first - 1, now.second] = min(check[now,first - 1][now.second], check[now.first, now.second]);
			}
			else if (mp[now.first - 1][now.second] == '#' && check[now,first][now.second] < 2)
			{
				que.push(make_pair(now.first - 1, now.second));
				check[now.first - 1, now.second] = min(check[now,first - 1][now.second], check[now.first, now.second] + 1);
			}
		}
				
		if (now.first + 1 < H && S.find(make_pair(now.first + 1, now.second)) == S.end())
		{
			if (mp[now.first + 1][now.second] == '.')
			{
				que.push(make_pair(now.first + 1, now.second));
				check[now.first + 1, now.second] = min(check[now,first + 1][now.second], check[now.first, now.second]);
			}
			else if (mp[now.first - 1][now.second] == '#' && check[now,first][now.second] < 2)
			{
				que.push(make_pair(now.first - 1, now.second));
				check[now.first - 1, now.second] = min(check[now,first - 1][now.second], check[now.first, now.second] + 1);
			}
		}
		if (0 <= now.second- 1 && S.find(make_pair(now.first, now.second - 1)) == S.end())
		if (now.second + 1 < W && S.find(make_pair(now.first, now.second + 1)) == S.end())
		
	
	
}

