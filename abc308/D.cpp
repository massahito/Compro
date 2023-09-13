#include <iostream>
#include <string>
#include <vector>

using namespace std;
void	dfs(vector<string> &S, vector<vector<bool>> &foot, int y, int x, int now);
int		H, W;
string	s = "snuke";

int main(void)
{
	cin >> H >> W;
	vector<string>	S(H);
	vector<vector<bool>> foot(H, vector<bool> (W, false));

	for(int i = 0; i < H; i++)
		cin >> S[i];
	if(S[0][0] != 's')
	{
		cout << "No" << endl;
		return (0);
	}

	dfs(S, foot, 0, 0, 0);
	if(foot[H - 1][W- 1])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

void	dfs(vector<string> &S, vector<vector<bool>> &foot, int y, int x, int now)
{
	int 	movex[] = {-1, 1, 0, 0};
	int 	movey[] = {0, 0, -1, 1};

	foot[y][x] = true;
	for(int i = 0; i < 4; i++)
	{
		int nexty = y + movey[i];
		int nextx = x + movex[i];
		if (0 > nexty || nexty >= H || 0 > nextx || nextx >= W || foot[nexty][nextx])
			continue;
		else if (S[nexty][nextx] != s[(now + 1) % 5])
			continue;
		dfs(S, foot, nexty, nextx, (now + 1) % 5);
	}
}
			
	
	
