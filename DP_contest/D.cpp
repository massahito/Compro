#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long DP[110][100010] = {}, value;
	int N, W, weight;

	cin >> N >> W;
	for (int i = 1; i <= N; i++)
	{
		cin >> weight >> value;
		for (int j = 1; j <= W; j++)
		{
			if (weight > j)
				DP[i][j] = DP[i- 1][j];
			else
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - weight] + value);
		}
	}
	cout << DP[N][W] << endl;
	return (0);
}
