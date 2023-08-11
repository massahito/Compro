#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int	N; 
	map<string, int> mp;
	bool isgood = true;
	char last;


	cin >> N;

	for(int i = 0; i < N; i++)
	{
		string S;

		cin >> S;
		if(i != 0 && last != S[0])
			isgood = false;
		if(mp[S])
			isgood = false;
		last = S[S.size() - 1];
		mp[S]++;
	}
	if(isgood)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

