#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	string				S;
	int					k;
	set<string>			mp;
	cin >> S >> k;

	for(int i = 0; i < S.size(); i++)
	{
		string tmp = S.substr(i, k);
		if(tmp.size() == k)
			mp.insert(tmp);
	}
	cout << mp.size() << endl;
}
