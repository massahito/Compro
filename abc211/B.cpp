#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool	base[4] = {false};
	for(int i = 0; i < 4; i++)	
	{
		string S;
		cin >> S;
		if(S == "H")
			base[0] = true;
		if(S == "2B")
			base[1] = true;
		if(S == "3B")
			base[2] = true;
		if(S == "HR")
			base[3] = true;
	}
	for(int i = 0; i < 4; i++)	
	{
		if(!base[i])
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}

			
