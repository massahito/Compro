#include <iostream>
#include <vector>
#include <iterator>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int N, T, num, zero, biggest,ans;
	map<int, vector<int>> mp;
	vector<int>::iterator x;
	vector<int> R;
	cin >> N >> T;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		if(i == 0)
			zero = num;
		mp[num].push_back(i);
	}
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		R.push_back(num);
	}
	biggest = 0;
	if(mp[T].size() == 0)
	{
		for(int i = 0; i < mp[zero].size(); i++)
		{
			if(biggest < *x)
			{
				ans = i;
				biggest = *x;
			}
		}
		cout << ans << endl;
	}
	else
	{
		for(int i = 0; i < mp[zero].size(); i++)
		{
			if(biggest < *x)
			{
				ans = i;
				biggest = *x;
			}
		}
		cout << ans << endl;
	}
	return (0);
}
