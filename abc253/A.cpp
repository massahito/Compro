#include <iostream>

using namespace std;

int  main()
{
	int	N;

	cin >> N;
	cout << (N % 100 - N % 10) / 10 << N % 10  << endl;
}
