#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
<<<<<<< HEAD
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


	
=======
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
		
		
>>>>>>> 8dd4865e09721498ac1b013a65bc5beb7f11f9ab
