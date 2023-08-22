#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	int					N;
	int					max = 0;
	string				name;
	map<string, int>	mp;

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		string S;

		cin >> S;
		mp[S]++;
		if(max < mp[S])
		{
			max = mp[S];
			name = S;
		}
	}
	cout << name << endl;
}
