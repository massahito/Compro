#include <iostream>
#include <vector>
#include <string>

using namespace std;

char arr[] = "sunuke";
int	dirx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int	diry[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int H, W;

int main()
{

	cin >> H >> W;
	vector<vector<char>> mp(H, vector<char> (W));

	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> mp[i][j];
	
	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			if(mp[i][j] == 's')
			{
				for(int k = 0; k < 8; k++)
				{
					string str = "";
					for(int l = 0; l < 5; l++)
					{
						int y = i + l * diry[k];
						int x = j + l * dirx[k];
						if(y < 0 || H <=y || x < 0 || W <= x)
							continue;
						str+= mp[y][x];
					}
					if(str == "snuke")
					{
						for(int t = 0; t < 5; t++)
						{
							int x = j + t*dirx[k] + 1;
							int y = i + t*diry[k] + 1;
							cout << y << " " << x << endl;
						}
						return 0;
					}
				}
				
			}
		}
	}
}
	
	

