#include <iostream>
#include <string>

using namespace std;

int main()
{
	string	S;

	cin >> S;

	cout << S.substr(0, 2) << endl;
	cout << S.substr(0, -2) << endl;
	cout << S.substr(0, 20) << endl;
}
