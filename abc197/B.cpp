#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int H, W, X, Y, count = 1;
	int x[4] = {1, -1, 0, 0};
	int y[4] = {0, 0, 1, -1};

	cin >> H >> W >> Y >> X;
	vector<vector<char>> M(H, vector<char> (W));
	X--;
	Y--;
	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> M[i][j];
	
	for(int i = 0; i < 4; i++)
	{
		int nowx = X;
		int nowy = Y;

		while(0 <= (x[i] + nowx) && (x[i] + nowx) < W && 0 <= (y[i] + nowy) && (y[i] + nowy) < H)
		{
			nowx += x[i];
			nowy += y[i];
			if(M[nowy][nowx] == '#')
				break;
			else
				count++;
		}
	}
	cout << count  << endl;
}
	


