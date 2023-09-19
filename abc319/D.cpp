#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long	N, M, sum = 0;

	cin >> N >> M;
	vector<long long> L(N);

	for (int i = 0; i < N; i++)
	{
		cin >> L[i];
		sum += (L[i] + 1);
	}

	long long	left = 0;
	long long	right = sum;;

	while(right - left > 1)
	{
		long long	mid = (right + left) / 2;
		long long	length = 0;	
		long long	row = 1;
		
		for (long long i = 0; i < N; i++)
		{
			length += L[i];
			if (mid <= length)
			{
				row++;
				length = L[i];
			}
		}
		if (row <= M)
			right = mid;
		else
			left = mid;
	}
	cout << left - 1 << endl;

}
