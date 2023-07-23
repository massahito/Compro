#include <iostream>

using namespace std;

int main()
{
	string S;

	cin >> S;

	if(S.size() != 8)
	{
		cout << "No" << endl;
		return (0);
	}
	else
	{
		if(S[0] < 'A' || 'Z' < S[0] || S[7] < 'A' || 'Z' < S[7] || S[1] == '0')
		{
			cout << "No" << endl;
			return (0);
		}
		for(int i = 1; i < 7; i++)
		{
			if(S[i] < '0' ||'9' <  S[i])
			{
				cout << "No" << endl;
				return (0);
			}
		}
	}
	cout << "Yes" << endl;
}


