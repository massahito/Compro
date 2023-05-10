#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N, num, ans;

	cin >> N;
	int arr[N][N];
	num = -1;
	ans = -1;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
			if(num < arr[i][j])
				num = arr[i][j];
		}
	}
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(arr[i][j] == num)

}


int keisan(int *arr, int i, int j, int count, int ans)
{
	int num;

	
	
