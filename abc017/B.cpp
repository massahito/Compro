#include <iostream>
#include <string>
using namespace std;

int main()
{
	string		S;

	cin >> S;
	
	if(S.size() == 0)
		cout << "YES" << endl;
	for(int i = 0; i < S.size(); i++)
	{
		if(S[i] == 'o' || S[i] == 'k' || S[i] == 'u')
			continue;
		else if(i + 1 < S.size() && S.substr(i, 2) == "ch")
		{
			i++;
			continue;
		}
		else
		{
			cout << "NO" << endl;
			return (0);
		}
	}
	cout << "YES" << endl;
}
