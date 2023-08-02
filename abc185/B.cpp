#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M, T;

	cin >> N >> M >> T;
	int full = N;
	vector<int> A(M), B(M);
	for(int i = 0; i < M; i++)
		cin >> A[i] >> B[i];
	for(int i = 0; i < M; i++)
	{
		if(i == 0)
			N -= A[i];
		else
			N -= (A[i] - B[i - 1]);
		if (N <= 0)
		{
			cout << "No" << endl;
			return (0);
		}
		if (N < full)
			N = min(full, N + (B[i] - A[i]));
	}
	if (N <= T - B[M - 1])
	{
		cout << "No" << endl;
		return (0);
	}
	cout << "Yes" << endl;
}
	
		
		
