#include <iostream>
#include <string>

using namespace std;

int main()
{
	string	S, T;
	string	front, end;
	bool	fgood = true;
	int		egood = 0;

	cin >> S >> T;
	end = S.substr(S.size() - T.size());
	for (int i = 0; i < T.size(); i++)
		if (T[i] != end[i] && T[i] != '?' && end[i] != '?')
			egood++;
	if (egood == 0 && fgood)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	for (int i = 0; i < T.size(); i++)
	{
		if (S[i] != T[i] && S[i] != '?' && T[i] != '?')
			fgood = false;
		if (i < T.size() && end[i] != T[i] && end[i] != '?' && T[i] != '?')
			egood--;
		if (egood == 0 && fgood)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}

	
	
