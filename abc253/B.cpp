#include <iostream>

using namespace std;

int main()
{
	int N;
	int arr[30][30] = {0};

	cin >> N;
	for(int i = 0 ; i < N; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			if(j == 0 || j == i)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

