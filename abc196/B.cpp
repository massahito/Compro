#include <iostream>
#include <string>

using namespace std;

int main()
{
	string X;

	cin >> X;
	for(int i = 0; i < X.size(); i++)
	{
		if(X[i] == '.')
			break;
		else
			cout << X[i];
	}
	cout << endl;
}
