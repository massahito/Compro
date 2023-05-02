#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
	int							N;
	unordered_map<string, bool>	mp;

	cin >> N;
	vector<int>	T(N, -1);
	for(int i = 0; i < N; i++)
	{
		string	s;
		int		t;
		cin >> s >> t;
		T[i] = t;
		if(mp.find(s) != mp.end())
			mp[s] = true;
		else
			mp[s] = false;
	}
	for(unordered_map<string, bool>::iterator iter = mp.begin(); iter != mp.end(); iter++)
	{

