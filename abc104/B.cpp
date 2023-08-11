#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	bool	isgood = true;
	int		count = 0;

	cin >> S;
	
	if(S[0] != 'A')
		isgood = false;
		
	for(int i = 1; i < S.size(); i++)
	{
		if(S[i] < 'a' || 'z'< S[i])
		{
			if((2 <= i && i < S.size() - 1) && S[i] == 'C' && count == 0)
				count++;
			else
				isgood = false;
		}
	}

	if(isgood && count)
		cout << "AC" << endl;
	else
		cout << "WA" << endl;
}

