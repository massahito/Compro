#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <utility>

using namespace std;
int main()
{
	int H, W, N;
	int count = 0;
	pair<int, int> start;

	cin >> H >> W >>N;
	vector<vector<char>> mp(H, vector<char> (W));

	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			cin >> mp[i][j];
			if(mp[i][j] == 'S')
				start = make_pair(i, j);
		}
	}

	for(int i = 0; i < N; i++)
	{
		vector<vector<int>> foot(H, vector<int> (W, 0));
		set<pair<int, int>> S;
		queue<pair<int, int>> Q;
		Q.push(start);
		while(!Q.empty())
		{
			pair<int, int> tmp = Q.front();
			Q.pop();
			if (mp[tmp.first][tmp.second] == i + '1')	
			{
				count += foot[tmp.first][tmp.second];
				start = tmp;
				break;
			}
			
			if(0 <= tmp.first - 1 && mp[tmp.first -1][tmp.second] != 'X')
			{
				pair<int, int> ax = make_pair(tmp.first - 1, tmp.second);
				if (S.find(ax) == S.end())
				{
					Q.push(ax);
					S.insert(ax);
					foot[ax.first][ax.second] = foot[tmp.first][tmp.second] + 1;
				}
			}
			if(tmp.first + 1 < H && mp[tmp.first + 1][tmp.second] != 'X')
			{
				pair<int, int> ax = make_pair(tmp.first + 1, tmp.second);
				if (S.find(ax) == S.end())
				{
					Q.push(ax);
					S.insert(ax);
					foot[ax.first][ax.second] = foot[tmp.first][tmp.second] + 1;
				}
			}
			if(0 <= tmp.second - 1 && mp[tmp.first][tmp.second - 1] != 'X')
			{
				pair<int, int> ax = make_pair(tmp.first, tmp.second - 1);
				if (S.find(ax) == S.end())
				{
					Q.push(ax);
					S.insert(ax);
					foot[ax.first][ax.second] = foot[tmp.first][tmp.second] + 1;
				}
			}
			if(tmp.second + 1 < W && mp[tmp.first][tmp.second + 1] != 'X')
			{
				pair<int, int> ax = make_pair(tmp.first, tmp.second + 1);
				if (S.find(ax) == S.end())
				{
					Q.push(ax);
					S.insert(ax);
					foot[ax.first][ax.second] = foot[tmp.first][tmp.second] + 1;
				}
			}
		}
	}
	cout << count << endl;
}
		

