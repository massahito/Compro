#include <iostream>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;
int func(vector<int> &A, long long agg, int n, int current);
int N, K;
int main()
{

	cin >> N >> K;
	vector<int> A(N, 0), B(K, 0);
	
	for(int i = 0; i < N; i++)
		cin >> A[i];
	
	cout << func(A, 0, 0, 0) << endl;
}

int func(vector<int> &A, long long agg, int n, int current)
{
	int ans = INT_MAX;
	if(current == K)
	{
		int coin = 0;
		for(int i = 9; 0 <= i; i--)
		{
			int num = agg / (5 * pow(10, i));
			if(num)
			{
				coin += num;
				agg = agg - num * (5 * pow(10, i));
			}
			num = agg / pow(10, i);
			if(num)
			{
				coin += num;
				agg = agg - num * pow(10, i);
			}
		}
		return min(ans, coin);
	}

	for(int i = n; i < N; i++)
		ans = min(ans, func(A, agg + A[i], i + 1, current + 1));
	return ans;
}

		
