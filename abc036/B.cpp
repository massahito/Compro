#include <iostream>


using namespace std;

int main()
{
	int N;

	cin >> N;
	char arr[N][N];

	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			cin >> arr[i][j];
	for(int j = 0; j < N; j++)	
	{
		for(int i = N - 1; 0 <= i; i--)
			cout << arr[i][j];
		cout << endl;
	}
}
