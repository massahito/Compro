#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int	main()
{
	long long		K;
	vector<long long> P;

	for (long long i = 1; i < (1<<10); i++)
	{
		long long ans = 0;
		for(long long j = 9; 0 <= j; j--)
		{
			if (i & (1<<j))
				ans = j + ans * 10;
		}
		P.push_back(ans);
	}
	sort(P.begin(), P.end());
	cin >> K;
	cout << P[K] << endl;
}

		


