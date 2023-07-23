#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string S;
	int status[7] = {0, 0, 0, 0, 0, 0, 0};

	cin >> S;

	if(S[0] != '0')
	{
		cout << "No" << endl;
		return (0);
	}
	if(S[6] == '1')	
		status[0] = 1;
	if(S[3] == '1')
		status[1] = 1;
	if(S[1] == '1' || S[7] == '1')
		status[2] = 1;
	if(S[4] == '1')
		status[3] = 1;
	if(S[2] == '1' || S[8] == '1')
		status[4] = 1;
	if(S[5] == '1')
		status[5] = 1;
	if(S[9] == '1')
		status[6] = 1;
	
	for(int i = 0; i < 7; i++)
	{
		if(status[i] == 1)
		{
			bool is0 = false;
			bool is1 = false;
			for(int j = i + 1; j < 7; j++)
			{
				if(status[j] == 0)
					is0 = true;
				if(is0 && status[j] == 1)
					is1 = true;
			}
			if(is0 && is1)
			{
				cout << "Yes" << endl;
				return (0);
			}
		}
	}
	cout << "No" << endl;
}
