#include <iostream>

using namespace std;

int main()
{
	int H, W;
	int x, y;

	cin >> H >> W;
	x = 0;
	y = 0;
	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			char chr;
			cin >> chr;
			if(chr == 'o')
			{
				x = abs(x - j);
				y = abs(y - i);
			}
		}
	}
	cout << x + y << endl;
}
