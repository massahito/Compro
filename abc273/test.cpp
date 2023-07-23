#include <iostream>
#include <climits>

using namespace std;
int main()
{
	int a = 10;
	long b = INT_MAX;

	cout << a * b << endl;
	cout << (long) a * b << endl;
	cout << a * (int) b << endl;
	cout << a * (long)b << endl;
	cout << b * (int)a << endl;
}
