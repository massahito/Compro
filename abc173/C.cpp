#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int H, W, K;
	int count = 0;

	cin >> H >> W >> K;
	
	vector<vector<char>> C(H, vector<char> (W));

	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> C[i][j];

	for(int i = 0; i < (1<<H); i++)
	{
		for(int j = 0; j < (1<<W); j++)
		{
			int black = 0;
			for(int n = 0; n < H; n++)
			{
				for(int m = 0; m < W; m++)
				{
					if(i & (1<<n) || j & (1<<m))
						continue;
					else if(C[n][m] == '#')
						black++;
				}
			}
			if(black == K)
				count++;
		}
	}
	cout << count << endl;
}
