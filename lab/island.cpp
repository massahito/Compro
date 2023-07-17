#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int w, h;

	cin >> w >> h;
	vector<vector<int>> c(h, vector<int> (w));
	for(int i = 0; i < h; i++)
		for(int j = 0; j < w; j++)
			cin >> c[i][j];
}
