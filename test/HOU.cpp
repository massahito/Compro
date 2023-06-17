#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int N;
	int	ans = 0;

	cin >> N;
	vector<vector<int>>Ax(N), Ay(N);

	for(int i = 0; i < N; i++)
	{
		int a;

		cin >> a;
		for(int j = 0; j < a; j++)
		{
			int x, y;
			cin >> x >> y;
			x--;
			Ax[i].push_back(x);
			Ay[i].push_back(y);
		}
	}
	for(int i = 0; i < (1<<N); i++)
	{
		bool flag = true;
		for(int j = 0; j < N; j++)
		{
			if(!(i & (1 << j)))
				continue;
			for(int k = 0; k < Ax[j].size(); k++)
			{
				 if(Ay[j][k] != (bool)(i & (1<<Ax[j][k])))
				 {
				 	flag = false;
				}
			}
			if(!flag)
				break;
		}
		if(flag)
		{
			int count = 0;
			for(int j = 0; j < N; j++)
			{
				if(i & (1<<j))	
					count++;
			}
			ans = max(ans, count);
		}
	}
	cout << ans << endl;
}
	
