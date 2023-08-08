#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, ans = -1<<30;

	cin >> N;
	vector<int> V(N), C(N);
	for(int i = 0; i < N; i++)
		cin >> V[i];
	for(int i = 0; i < N; i++)
		cin >> C[i];
	for(int i = 0; i < 1<<N; i++)
	{
		int sumX = 0, sumY = 0;
		for(int j = 0; j < N; j++)
		{
			if(i & 1<<j)
			{
				sumX += V[j];
				sumY += C[j];
			}
		}
		ans = max(ans, sumX - sumY);
	}
	cout << ans << endl;
}
