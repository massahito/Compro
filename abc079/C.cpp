#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string S;

	cin >> S;
	
	for(int i = 0; i < (1<<3); i++)
	{
		int ans = S[0] - '0';
		for(int j = 0; j < 3; j++)
		{
			if(i & 1<<j)
				ans += (S[j + 1] - '0');
			else
				ans -= (S[j + 1] - '0');
		}
		if (ans ==7)
		{
			for(int j = 0; j < 3; j++)
			{
				cout << S[j];
				if (i & 1<<j)
					cout << "+";
				else
					cout << "-";
			}
			cout << S[3] << "=7" << endl;
			return (0);
		}
	}
}
