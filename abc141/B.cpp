#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	bool isgood = true;

	cin >> S;
	
	for(int i = 0; i < S.size(); i++)
	{
		if(i % 2 && S[i] == 'R')
			isgood = false;
		if(i % 2 == 0 && S[i] == 'L')
			isgood = false;
	}
	if(isgood)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}



