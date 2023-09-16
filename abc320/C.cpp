#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main()
{
	int			M;
	int			ans = 1<<30;
	string		S[3];

	cin >> M;
	for (int i = 0; i < 3; i++)
		cin >> S[i];
	for (int i = 0; i < 10; i++)
	{
		vector<int> P(3);
		for (int j = 0; j < 3; j++)
			P[j] = j;
		do
		{
			int			time = 0;
			for (auto x : P)	
			{
				int pretime = time;
				while(1)	
				{
					if (S[x][time % M] - '0' == i)
					{
						time++;
						break;
					}
					else if (time - pretime > M)
					{
						time = -1;
						break;
					}
					time++;
				}
				if (time <= 0)
					break;
			}
			if (0 < time)
				ans = min(ans, time - 1);
		} while(next_permutation(P.begin(), P.end()));
	}
	if  (ans == 1<<30)
		cout << -1 << endl;
	else
		cout << ans  << endl;
}
