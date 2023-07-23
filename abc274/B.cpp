#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int H, W;

	cin >> H >> W;
	vector<vector<char>> C(H, vector<char> (W));
	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> C[i][j];

	for(int i = 0; i < W; i++)
	{
		int count = 0;
		for(int j = 0; j < H; j++)
			if(C[j][i] == '#')
				count++;
		cout << count << " ";
	}
	cout << endl;
}
