#include <iostream>
#include <string>

using namespace std;

int main()
{
	int A, B;
	string S;
	bool	isgood = true;

	cin >> A >> B;
	cin >> S;

	for(int i = 0; i < A + B + 1; i++)
	{
		if(i != A)
		{
			if(S[i] < '0' || '9' < S[i])
				isgood = false;
		}
		else if(S[i] != '-')
			isgood = false;
	}

	if(isgood)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

