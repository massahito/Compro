#include <iostream>
#include <string>

using namespace std;

int main()
{
	string	S, T;

	cin >> S >> T;
	
	for (int i = 0; i < T.size() + 1; i++)
	{
		bool	isgood = true;
		int		k = 0;
	
		for (int j = 0; j < i; j++, k++)
			if (S[j] != T[k] && S[k] != '?' && T[k] != '?')
				isgood = false;
		for (int j = S.size() - (T.size() - i); j < S.size(); j++)
		{
			if (S[j] != T[k] && S[j] != '?' && T[k] != '?')
				isgood = false;
			k++;
		}
		if (isgood)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}

