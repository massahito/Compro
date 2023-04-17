#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, num; 
	long A[100010][3], B[100010][3];
	
	cin >> N;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin >> num;
			B[i][j] = num;
		}
	}
	A[0][0] = B[0][0];
	A[0][1] = B[0][1];
	A[0][2] = B[0][2];
	for(int i = 1; i < N; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			A[i][j] = max(A[i - 1][(j + 1) % 3], A[i - 1][(j + 2) % 3]) + B[i][j];
		}
	}
	cout << A[N- 1][0] <<  A[N - 1][1] << A[N - 1][2] << endl;
}
