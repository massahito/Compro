#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	int	B, R;
	cin >> S;
	B = 0;
	R = 0;
	for(int i = 0; i < 8; i++)
	{
		if (S[i] == 'B')
			B += i;
		else if (S[i] == 'R')
			R++;
		else if (S[i] == 'K')
			R *= 10;
	}
	if (B % 2 && R == 11)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
