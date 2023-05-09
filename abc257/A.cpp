#include <iostream>

using namespace std;

int main()
{
	int N, X;

	cin >> N >> X;
	if(X % N == 0)
		cout << (char) ('A' + X / N - 1) << endl;
	else
		cout << (char) ('A' + X / N) << endl;
}
