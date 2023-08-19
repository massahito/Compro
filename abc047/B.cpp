#include <iostream>

using namespace std;

int main()
{
	int W, H, N;
	
	cin >> W >> H >> N;

	int arr[4] = {0, W, 0, H};

	for(int i = 0; i < N; i++)
	{
		int x, y, a;

		cin >> x >> y >> a;

		if(a == 1)
			arr[0] = max(arr[0], x);
		else if(a == 2)
			arr[1] = min(arr[1], x);
		else if(a == 3)
			arr[2] = max(arr[2], y);
		else
			arr[3] = min(arr[3], y);
	}
	if(arr[1] - arr[0] < 0 || arr[3] - arr[2] < 0)
		cout << 0 << endl;
	else
		cout << (arr[1] - arr[0]) * (arr[3] - arr[2]) << endl;
}
		
		
