#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int H, W;

	cin >> H >> W;

	vector<vector<char>> A(H, vector<char> (W));
	vector<vector<char>> B(H, vector<char> (W));

	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> A[i][j];
	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> B[i][j];

	for(int y = 0; y < H; y++)
	{
		for(int x = 0; x < W; x++)
		{
			bool isgood = true;
			for(int i = 0; i < H; i++)
				for(int j = 0; j < W; j++)
					if(A[i][j] != B[(i + y) % H][(j + x) % W])
						isgood =false;
			if(isgood)
			{
				cout << "Yes" << endl;
				return (0);
			}
		}
	}
	cout << "No" << endl;
}
