#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	int count = 0;

	cin >> N >> M;

	vector<vector<int>> K(N);
	vector<int> P(M);

	for(int i = 0; i < M; i++)
	{
		int k;
		cin >> k;
		for(int i = 0; i < k; i++)
		{
			int s;
			cin >> s;
			s--;
			K[s].push_back(i);
		}
	}
	for(int i = 0; i < M; i++)
		cin >> P[i];
	
	for(int i = 0; i <= pow(2, N); i++)
	{
		int bit[N] = {0};
		int ramp[M] = {0};

		for(int j = 0; j < N; j++)
		{
			int div = 1 << j;
			bit[j] = (i / div) % 2;
		}
		for(int j = 0; j < N; j++)
		{
			if(bit[j])
				for(auto x : K[j])
					ramp[x]++;
		}
		bool flag = true;
		for(int j = 0; j < M; j++)
			if(ramp[j] % 2 != P[j])
				flag = false;
		if(flag)
			count++;
	}

	cout << count << endl;
}




















