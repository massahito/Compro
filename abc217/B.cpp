#include <iostream>
#include <string>

using namespace std;

int main()
{
	string cmp[4] = {"ABC", "ARC", "AGC", "AHC"};
	bool	ans[4] = {false};
	
	for(int i = 0; i < 3; i++)
	{
		string S;

		cin >> S;
		for(int j = 0; j < 4; j++)
			if(cmp[j] == S)
				cmp[j] = "OK";
	}

	for(int i = 0; i < 4; i++)
		if(cmp[i][0] == 'A')
			cout << cmp[i] << endl;
	return (0);
}
