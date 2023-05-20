#include <iostream>

using namespace std;

char	map[500][500];
bool	mp[500][500] = {false};
void search(int i, int j, int H, int W);

int main()
{
	int		H, W;
	cin >> H >> W;

	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> map[i][j];

	search(0, 0, H, W);
}

void search(int i, int j, int H, int W)
{
	bool tp = mp[i][j];
	mp[i][j] = true;
	if(map[i][j] == 'U' && 0 <= i - 1)
	{
		if(!mp[i - 1][j])
			search(i - 1, j, H, W);
		else
		{
			cout << -1 << endl;
			return ;
		}
	}

	else if(map[i][j] == 'D' && i + 1 < H)
	{
		if(!mp[i + 1][j])
			search(i + 1, j, H, W);
		else
		{
			cout << -1 << endl;
			return ;
		}
	}

	else if(map[i][j] == 'R' && j + 1 < W)
	{
		if(!mp[i][j + 1])
			search(i, j + 1, H, W);
		else
		{
			cout << -1 << endl;
			return ;
		}
	}

	else if(map[i][j] == 'L' && 0 <= j - 1)
	{
		if(!mp[i][j - 1])
			search(i, j - 1, H, W);
		else
		{
			cout << -1 << endl;
			return ;
		}
	}
	else if(!tp)
		cout << i + 1 << " " << j + 1 << endl;
	else
		cout << -1 << endl;
}

