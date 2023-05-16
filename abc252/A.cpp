#include <iostream>

using namespace std;
int main()
{
	int a, b, c;
	int mid;

	cin >> a >> b >> c;
	if((a <= b && b <= c) || (c <= b && b <= a))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
