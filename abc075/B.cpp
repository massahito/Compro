#include <iostream>
#include <vector>

using namespace std;

int mx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int my[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int main()
{
	int H, W;

	cin >> H >> W;
	vector<vector<char>> M(H, vector<char> (W));

	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> M[i][j];
	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			int count = 0;
			if(M[i][j] == '#')
				continue;
			for(int k = 0; k < 8; k++)
			{
				int x = j + mx[k];
				int y = i + my[k];
				if(x < 0 || W <= x || y < 0 || H <= y)
					continue;
				if(M[y][x] == '#')
					count++;
			}
			M[i][j] = '0' + count;
		}
	}
	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
			cout << M[i][j];
		cout << endl;
	}
}


		

	
