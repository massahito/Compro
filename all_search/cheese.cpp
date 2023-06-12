//https://atcoder.jp/contests/joi2011yo/tasks/joi2011yo_e
#include <iostream>
#include <vector>
#include <set> 
#include <utility>
#include <queue>

using namespace std;

int main()
{
	int H, W, N;
	int	cheese = 1;
	set<pair<int, int>> S;
	pair<int, int> s;
	cin >> H >> W >> N;

	
	vector<vector<int>> C(H, vector<int> (W, 0));
	vector<vector<char>> M(H, vector<char> (W));
	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			cin >> M[i][j];
			if (M[i][j] == 'S')
				s = make_pair(i, j);
		}
	}

	for(int i = 0; i < N; i++)
	{
		queue<pair<int, int>> Q;
		Q.push(s);
		S.clear();
		while(!Q.empty())
		{
			pair<int, int> now = Q.front();
			Q.pop();
			if(M[now.first][now.second] == (char)(cheese + '0'))
			{
				s = now;
				cheese++;
				break;
			}


			if(0 <= now.first - 1 && M[now.first - 1][now.second] != 'X')
			{
				pair<int, int> tmp = make_pair(now.first - 1, now.second);
				if(S.find(tmp) == S.end())
				{
					S.insert(tmp);
					C[tmp.first][tmp.second] = C[now.first][now.second] + 1;
					Q.push(tmp);
				}
			}
			if(now.first + 1 < H && M[now.first + 1][now.second] != 'X')
			{
				pair<int, int> tmp = make_pair(now.first + 1, now.second);
				if(S.find(tmp) == S.end())
				{
					S.insert(tmp);
					C[tmp.first][tmp.second] = C[now.first][now.second] + 1;
					Q.push(tmp);
				}
			}
			if(0 <= now.second - 1 && M[now.first][now.second - 1] != 'X')
			{
				pair<int, int> tmp = make_pair(now.first, now.second - 1);
				if(S.find(tmp) == S.end())
				{
					S.insert(tmp);
					C[tmp.first][tmp.second] = C[now.first][now.second] + 1;
					Q.push(tmp);
				}
			}
			if(now.second + 1 < W && M[now.first][now.second + 1] != 'X')
			{
				pair<int, int> tmp = make_pair(now.first, now.second + 1);
				if(S.find(tmp) == S.end())
				{
					S.insert(tmp);
					C[tmp.first][tmp.second] = C[now.first][now.second] + 1;
					Q.push(tmp);
				}
			}
		}
	}
	cout << C[s.first][s.second] << endl;
}
