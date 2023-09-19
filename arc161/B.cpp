#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>

using namespace std;

vector<long long>	V;	
long long	binarySearch(long long N);

int main(void)
{
	int					T;

	for (int i = 0; i <= 60; i++)
	{
		for (int j = i + 1; j <= 60; j++)
		{
			for (int k = j + 1; k <= 60; k++)
			{
				bitset<64>	bits(0);
				V.push_back(bits.set(i).set(j).set(k).to_ullong());
			}
		}
	}
	sort(V.begin(), V.end());

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		long long	N;
		
		cin >> N;
		if (N < 7)
			cout << -1 << endl;
		else
			cout << binarySearch(N) << endl;
	}
}


long long	binarySearch(long long N)
{
	int left = 0;
	int right = V.size() - 1;


	while (right - left > 1)
	{
		int mid = (left + right) / 2;
		if (V[mid] <= N)
			left = mid;
		else
			right = mid;
	}
	return (V[left]);
}
