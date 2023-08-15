#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	if(b < 10)
		a *= 10;
	else if(b < 100)
		a *= 100;
	else
		a *= 1000;
	a += b;
	if(sqrt(a) - (double)floor(sqrt(a)) == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

	
