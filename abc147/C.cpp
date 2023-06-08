#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int	N;
	int count = 0;
	
	cin >> N;
	
	vector<vector<int>> Ax(N), Ay(N);

	for(int i = 0; i < N; i++)
	{
		int A;

		cin >> A;
		for(int j = 0; j < A; j++)
		{
			int x, y;

			cin >> x >> y;
			x--;
			Ax[i].push_back(x);
			Ay[i].push_back(y);
		}
	}
	
	for(int i = 0; i <= pow(2, N); i++)
	{
		int bit[N] = {0};
		bool flag = true;
		int cnt = 0;

		for(int j = 0; j < N; j++)
		{
			int dev = (1 << j);
			bit[j] = (i / dev) % 2;
		}

		for(int j = 0; j < N; j++)
			if(bit[j])
				for(int k = 0; k < Ax[j].size(); k++)
					if(bit[Ax[j][k]] != Ay[j][k])
						flag = false;
		if(flag)
			for(int j = 0; j < N; j++)
				if(bit[j])
					cnt++;
		count = max(count, cnt);
	}
	cout << count << endl;
}
