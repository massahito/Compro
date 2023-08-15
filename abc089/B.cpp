#include <iostream>
#include <map>

using namespace std;

int main()
{
	int N;
	map<char, int> mp;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		char c;
		cin >> c;
		mp[c]++;
	}
	if(mp.size() == 3)
		cout << "Three" << endl;
	else
		cout << "Four" << endl;
}
