#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int H, W;
	int first = -1, count = 0;

	cin >> H >> W;
	vector<int> P(101, 0);

	for(int i = 0; i < H * W; i++)
	{
		int a;
		cin >> a;
		P[a]++;
	}
	for(int i = 0; i <= 100; i++)
	{
		if (P[i] != 0 && first == -1)
			first = i;
		count += (i - first) * P[i];
	}
	cout << count << endl;
}


	
