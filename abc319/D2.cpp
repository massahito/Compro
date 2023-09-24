#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int			M, N;

	cin >> N >> M;
	vector<long long>	L(N);
	long long left = 0, right = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> L[i];
		L[i]++;
		right += L[i];
	}
	while (right > 1 + left)
	{
		long long 	mid = (right + left) / 2;
		long long	sum = 0;
		int			count = 1;

		for (int i = 0; i < N; i++)
		{
			sum += L[i];
			if (mid < sum)
			{
				count++;
				sum = L[i];
			}
		}
		if (count <= M)
			right = mid;
		else
			left = mid;
	}
	cout << left << endl;
}
			
