#include <iostream>
#include <string>
using namespace std;

int main()
{
	string	S;
	int		count = 1;

	cin >> S;

	for(int i = 0; i < S.size(); i++)
	{
		if(i + 1 != S.size() && S[i + 1] == S[i])
			count++;
		else
		{
			cout << S[i] << count;
			count = 1;
		}
	}
	cout << endl;
}

