#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;

	cin >> S;
	for(int i = 0; i < S.size() / 2; i++)
	{
		if(S[i] != S[S.size() - 1 - i])
		{
			cout << "No" << endl;
			return (0);
		}
	}
	for(int i = 0; i < S.size() / 4; i++)
	{
		if(S[i] != S[(S.size() - 2) / 2 - i])
		{
			cout << "No" << endl;
			return (0);
		}
	}
	for(int i = (S.size() + 2) / 2; i < (S.size() * 3 + 2) / 4; i++ )
	{
		if (S[i] != S[S.size() - 1 - i])
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}


