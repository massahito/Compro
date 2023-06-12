//https://atcoder.jp/contests/joi2012yo/tasks/joi2012yo_e
#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <set>

using namespace std;
int main()
{
	int W, H;
	int count = 0;
	queue<pair<int, int>> Q;
	set<pair<int, int>> S;

	cin >> W >> H;

	vector<vector<int>> M(H + 2, vector<int> (W + 2, 0));
	
	for(int i = 1; i <= H; i++)
		for(int j = 1; j <= W; j++)
			cin >> M[i][j];
	Q.push(make_pair(0, 0));

	while(!Q.empty())
	{
		pair<int, int> now = Q.front();
		Q.pop();
		//calc neibour illum
		if(now.first % 2)
		{
			if(0 <= now.first - 1)
			{
				if(M[now.first - 1][now.second])
					count++;
				if(now.second + 1 < W + 2 && M[now.first - 1][now.second + 1])
					count++;
			}
			if(now.first + 1 < H + 2)
			{
				if(M[now.first + 1][now.second])
					count++;
				if(now.second + 1 < W + 2 && M[now.first + 1][now.second + 1])
					count++;
			}
		}
		else
		{
			if(0 <= now.first - 1)
			{
				if(M[now.first - 1][now.second])
					count++;
				if(0 <= now.second - 1 && M[now.first - 1][now.second - 1])
					count++;
			}
			if(now.first + 1 < H + 2)
			{
				if(M[now.first + 1][now.second])
					count++;
				if(0 <= now.second - 1 && M[now.first +1][now.second - 1])
					count++;
			}
		}
		if(0 <= now.second - 1 && M[now.first][now.second - 1])
			count++;
		if(now.second + 1 < W + 2 && M[now.first][now.second + 1])
			count++;
		//push next nord
		if(0 <= now.first - 1 && !M[now.first - 1][now.second])
		{
			pair<int, int> tmp = make_pair(now.first - 1, now.second);
			if(S.find(tmp) == S.end() && !M[tmp.first][tmp.second])
			{
				S.insert(tmp);
				Q.push(tmp);
			}
		}
		if(now.first + 1 < H + 2 && !M[now.first + 1][now.second])
		{
			pair<int, int> tmp = make_pair(now.first + 1, now.second);
			if(S.find(tmp) == S.end() && !M[tmp.first][tmp.second])
			{
				S.insert(tmp);
				Q.push(tmp);
			}
		}
		if(0 <= now.second - 1 && !M[now.first][now.second - 1])
		{
			pair<int, int> tmp = make_pair(now.first, now.second - 1);
			if(S.find(tmp) == S.end() && !M[tmp.first][tmp.second])
			{
				S.insert(tmp);
				Q.push(tmp);
			}
		}
		if(now.second + 1 < W + 2 && !M[now.first][now.second + 1])
		{
			pair<int, int> tmp = make_pair(now.first, now.second + 1);
			if(S.find(tmp) == S.end() && !M[tmp.first][tmp.second])
			{
				S.insert(tmp);
				Q.push(tmp);
			}
		}
		
	}
	cout << count << endl;
}
