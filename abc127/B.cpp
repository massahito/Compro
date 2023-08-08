#include <iostream>

using namespace std;

int main()
{
	long long r, D, X;

	cin >> r >> D >> X;

	for(int i = 0; i < 10; i++)
	{
		X = X * r - D;
		cout << X << endl;
	}
}
