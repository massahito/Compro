#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int H, W;
	char	map[100][100];
	bool	mp[100][100] = {false};
	cin >> H >> W;
	vector<int> vct(min(H, W), 0);
	
	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> map[i][j];
	
	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			if(map[i][j] == '#' && !mp[i][j])
			{
				int k = 0;
				while(i + k < H && j + k < W && map[i + k][j + k] == '#')
				{
					mp[i + k][j + k] = true;
					k++;
				}
				k--;
				vct[(k - 1) / 2]++;
				int l = 0;
				while(0 <= k && i + l < H)
				{
					mp[i + l][j + k] = true;
					l++;
					k--;
				}
			}
		}
	}
	for(int i = 0; i < vct.size(); i++)
		cout << vct[i] << " ";
	cout << endl;
}


