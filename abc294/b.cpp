#include <iostream>

using namespace std;

int main()
{
	int H, W;

	cin >> H >> W;
	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			int chr;

			cin >> chr; 
			if (chr == 0)
				cout << '.';
			else
				cout << (char)('A' + (chr - 1));
		}
		cout << endl;
	}
}
