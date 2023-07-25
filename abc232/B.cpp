#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S, T;

	cin >> S >> T;
	for(int i = 0; i < 26; i++)
	{
		string D;
		for(int j = 0; j < S.size(); j++)
			D +=  ((S[j] - 'a') + i) % 26 + 'a';
		if(D == T)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
}


