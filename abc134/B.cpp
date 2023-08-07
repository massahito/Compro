#include <iostream>

using namespace std;

int main()
{
	int N, D;

	cin >> N >> D;
	D = D * 2 + 1;
	cout << (N + D - 1) / D << endl;
}
