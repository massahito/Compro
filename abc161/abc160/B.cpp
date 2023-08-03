#include <iostream>

using namespace std;

int main()
{
	int X;

	cin >> X;

	cout << (X / 500) * 1000 + ((X - (X / 500) * 500) / 5) * 5 << endl;
}
