#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int			N, M;
	long long	left = 0, right = 0;

	cin >> N >> M;
	vector<long long> A(N), B(M);

	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		right = max(right, A[i] + 1);
	}
	for(int i = 0; i < M; i++)
	{
		cin >> B[i];
		right = max(right, B[i] + 1);
	}

	while(right - left > 1)
	{
		int			countA = 0, countB = 0;	
		long long	mid = (left + right) / 2;

		for (int i = 0; i < N; i++)
			if (A[i] <= mid)
				countA++;
		for(int i = 0; i < M; i++)
			if (mid <= B[i])
				countB++;
		if (countA < countB)
			left = mid;
		else if (countB <= countA)
			right = mid;
	}
	cout << right << endl;
}
				
	


