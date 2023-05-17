#include <iostream>

using namespace std;

int main()
{
	int Y;

	cin >> Y;

	if(Y % 4 == 2)
		cout << Y << endl;
	else if(Y % 4 == 0)
		cout << Y + 2 << endl;
	else
		cout << ((Y + 4) / 4) * 4 + 2 << endl;
}
