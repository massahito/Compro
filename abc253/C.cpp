#include <iostream>
#include <map>
using namespace std;

int main()
{
	int Q;
	int q, x, c;
	map<int, int> mp;

	cin >> Q;
	for(int i = 0; i < Q; i++)
	{
		cin >> q;
		if(q == 1)
		{
			cin >> x;
			mp[x]++;
		}
		else if(q == 2)
		{
			cin >> x >> c;
			while(mp[x] && c)
			{
				mp[x]--;
				c--;
			}
		}
		else
		{
			auto begin = mp.begin();
			auto rbegin = mp.rbegin();
			while(begin->second == 0)
				begin++;
			while(rbegin->second == 0)
				rbegin++;
			cout << rbegin->first - begin->first << endl;
		}
	}
}


