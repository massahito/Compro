#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	ssize_t	i;

	cin >> S;
	i = 0;
	while (S[i])
	{
		if('a' <= S[i] && S[i] <= 'z')
		{
			S[i] -= 32;
		}
		i++;
	}
	cout << S << endl;
}