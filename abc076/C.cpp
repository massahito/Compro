#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string S, T;
	int		start = -1;

	cin >> S;
	cin >> T;

	for(int i = 0; i < S.size(); i++)
	{
		for(int j = 0; j < T.size(); j++)
		{
			if(S[i] != '?' && S[i] != T[j]) 
				break;
			if(j == T.size() - 1)
			{
				start = i - (T.size() - 1);
				i--;
			}
			i++;
		}
	}

	if (start < 0)
		cout << "UNRESTORABLE" << endl;
	else
	{
		for(int i = 0; i < S.size(); i++)
		{
			if (i != start && S[i] == '?')
				S[i] = 'a';
			if(start == i)
			{
				for(int j = 0; j < T.size(); j++)
				{
					S[i] = T[j];
					i++;
				}
				i--;
			}
		}
		cout << S << endl;
	}

}

