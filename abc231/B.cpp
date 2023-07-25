#include <iostream>
#include <string>
#include <map>

using namespace std;
int main()
{
	int N, max = 0;
	string ans;
	
	map<string, int> mp;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		string S;
		cin >> S;
		mp[S]++;
	}
	for(auto x: mp)
	{
		if(max < x.second)
		{
			ans = x.first;
			max = x.second;
		}
	}
	cout << ans << endl;
}
		

