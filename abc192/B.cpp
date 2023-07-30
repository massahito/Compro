#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string S;

	cin >> S;

	for(int i = 0; i < S.size(); i++)
	{
		if(i % 2)
		{
			if(S[i] < 'A' || 'Z' < S[i])	
			{
				cout << "No" << endl;
				return (0);
			}
		}
		else
		{
			if(S[i] < 'a' || 'z' < S[i])	
			{
				cout << "No" << endl;
				return (0);
			}
		}
	}
	cout << "Yes" << endl;
}

