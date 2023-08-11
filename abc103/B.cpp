#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S, T;

	cin >> S >> T;

	for(int i = 0; i < S.size(); i++)
	{
		bool	isgood = true;
	
		for(int j = 0; j < S.size(); j++)
			if(S[(i + j) % S.size()] != T[j])
				isgood = false;
		if(isgood)
		{
			cout <<"Yes" << endl;
			return (0);
		}
	}
	cout <<"No" << endl;
	return (0);
}



