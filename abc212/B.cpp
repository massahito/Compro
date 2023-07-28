#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	bool isorder = true, issame = true;

	cin >> S;
	for(int i = 0; i < S.size() - 1; i++)
	{
		if(S[i] != S[(i + 1) % S.size()])	
			issame = false;
		if((((S[i] - '0') + 1) % 10) != (S[(i + 1) % S.size()] - '0'))
			isorder = false;
	}

	if(issame || isorder)
		cout << "Weak" << endl; 
	else
		cout << "Strong" << endl;
	return (0);
}
