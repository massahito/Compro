#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int			N;
	long long	ans = 0;

	cin >> N;

	vector<long long> V(N, 0);
	for(int i = 1; i < N; i++)
	{
		for(int j = 1; j * j <= i; j++)
		{
			if(i % j == 0)
			{
				V[i]++;
				if(j * j != i)
					V[i]++;
			}
		}
	}
	for(int i = 1; i < N; i++)
		ans = ans + (V[i] * V[N - i]);
	cout << ans << endl;
}
