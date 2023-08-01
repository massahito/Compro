#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int H, W, count = 0;

	cin >> H >> W;

	vector<int> A(101, 0);
	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			int a;
			cin >> a;
			A[a]++;
		}
	}
	sort(A.begin(), A.end());
	for(int i = 0; i <= 100; i++)
		count += () A[i]
	cout << count << endl;
}
		
		
