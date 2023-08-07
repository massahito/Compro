#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int> P(N);
	for(int i = 0; i < N; i++)
		cin >> P[i];
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			bool isgood = true;
			vector<int> Q = P;
			swap(Q[i], Q[j]);
			for(int k = 0; k < N - 1; k++)
				if(Q[k + 1] < Q[k])
					isgood = false;
			if(isgood)
			{
				cout << "YES" << endl;
				return (0);
			}
		}
	}
	cout << "NO" << endl;
}
