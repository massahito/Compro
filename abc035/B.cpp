#include <iostream>
#include <string>

using namespace std;

int main()
{
	string	S;
	int		T, count = 0;
	int 	x = 0, y = 0;

	cin >> S;
	cin >> T;

	for(int i = 0; i < S.size(); i++)
	{
		if(S[i] == 'L')
			x--;
		else if(S[i] == 'D')
			y--;
		else if(S[i] == 'R')
			x++;
		else if(S[i] == 'U')
			y++;
		else
			count++;
	}
	if(T == 1)
		cout << abs(x) + abs(y) + count << endl;
	else
	{
		int man = abs(x) + abs(y);
		if(count <= man)
			cout << man - count << endl;
		else
			cout << (count - man) % 2 << endl;
	}
}
