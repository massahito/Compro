#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;

	cin >> S;
	for(int i = S.size() - 1; 0 <= i; i--)
	{
		if(S[i] == '6')	
			S[i] = '9';
		else if(S[i] == '9')
			S[i] = '6';
		cout << S[i];
	}
	cout << endl;
}
