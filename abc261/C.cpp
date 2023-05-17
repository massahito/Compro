#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int N;
	map<string, int> mp;

	cin >> N;

	for(int  i = 0; i < N; i++)
	{
		string S;

		cin >> S;

		if(mp[S] == 0)
		{
			cout << S << endl;
			mp[S] = 1;
		}
		else
		{
			cout << S << '(' << mp[S] << ')' << endl;
			mp[S]++;
		}
	}
}


