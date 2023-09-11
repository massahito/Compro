#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int		N, M;

	cin >> N >> M;
	vector<int> A(N), B(M);

	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < M; i++)
		cin >> B[i];
	sort(A.begin(), A.end());
	long long left = 0, right = N - 1;

	while(1)
	{
		int mid = (left + right) / 2;
		int count = 0;
		for(int i = 0; i < M; i++)
			if (B[i] <= A[mid])
				count++;
		if(count <= mid + 1)
		{
			if(count == M)
				cout << B[M - 1] + 1 << endl;
			else
				cout << A[mid] << endl;
			return (0);
		}
		else
			left = mid;
	}
}
			

		
