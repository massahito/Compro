#include <iostream>

using namespace std;

int main()
{
	int H, W;

	cin >> H >> W;
	char arr[H][W];

	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> arr[i][j];

	for(int j = 0; j < W + 2; j++)
		cout << "#";
	cout << endl;

	for(int i = 0; i < H; i++)
	{
		cout << "#";
		for(int j = 0; j < W; j++)
			cout << arr[i][j];
		cout << "#";
		cout << endl;
	}
	for(int j = 0; j < W + 2; j++)
		cout << "#";
	cout << endl;
}
	

		
	
