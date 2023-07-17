#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <set>

using namespace std;

int main()
{
	int R, C;

	cin >> R >> C;
	vector<vector<char>> mp(R, vector<char> (C));
	vector<vector<int>> ord(R, vector<int> (C, 0));
	pair<int , int> start, goal;
	cin >> start.first >> start.second;
	cin >> goal.first >> goal.second;
	start.first--;
	start.second--;
	goal.first--;
	goal.second--;

	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			cin >> mp[i][j];
	
	queue<pair<int, int>> Q;
	set<pair<int , int>> S;
	Q.push(start);
	S.insert(start);
	while(!Q.empty())
	{
		pair<int, int> tmp;
		tmp = Q.front();
		Q.pop();
		cout << tmp.first << " " << tmp.second << endl;
		if(tmp == goal)
		{
			cout << ord[tmp.first][tmp.second] << endl;
			return 0;
		}
		if (0 <= tmp.first - 1 && S.find(make_pair(tmp.first - 1, tmp.second)) == S.end() && mp[tmp.first - 1][tmp.second] == '.')
		{
			Q.push(make_pair(tmp.first - 1, tmp.second));
			S.insert(make_pair(tmp.first - 1, tmp.second));
			ord[tmp.first - 1][tmp.second] = ord[tmp.first][tmp.second] + 1;
		}
		if (tmp.first + 1 < R && S.find(make_pair(tmp.first + 1, tmp.second)) == S.end() && mp[tmp.first + 1][tmp.second] == '.')
		{
			Q.push(make_pair(tmp.first + 1, tmp.second));
			S.insert(make_pair(tmp.first + 1, tmp.second));
			ord[tmp.first + 1][tmp.second] = ord[tmp.first][tmp.second] + 1;
		}
		if (0 <= tmp.second - 1 && S.find(make_pair(tmp.first, tmp.second - 1)) == S.end() && mp[tmp.first][tmp.second - 1] == '.')
		{
			Q.push(make_pair(tmp.first, tmp.second - 1));
			S.insert(make_pair(tmp.first, tmp.second - 1));
			ord[tmp.first][tmp.second -1] = ord[tmp.first][tmp.second] + 1;
		}
		if (tmp.second + 1 < C && S.find(make_pair(tmp.first, tmp.second + 1)) == S.end() && mp[tmp.first][tmp.second + 1] == '.')
		{
			Q.push(make_pair(tmp.first, tmp.second + 1));
			S.insert(make_pair(tmp.first, tmp.second + 1));
			ord[tmp.first][tmp.second + 1] = ord[tmp.first][tmp.second] + 1;
		}
	}
}
	
