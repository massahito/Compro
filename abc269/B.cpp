#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S, T;

	cin >> S >> T;

	if(T.size() < S.size())
	{
		cout << "No" << endl;
		return (0);
	}
	for(int i = 0; i < S.size(); i++)
	{
		if(S[i] != T[i])
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}
			
