#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	
	string S;
	map<char, int> mp;
	
	cin >> S;

	for(int i = 0; i < S.size(); i++)
		mp[S[i]]++;

	for(auto x : mp)
		for(int i = 0; i < x.second; i++)
			cout << x.first;
	cout << endl;
}

