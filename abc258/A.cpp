#include <iostream>

using namespace std;

int main()
{
	int K;
	int H, M;

	cin >> K;
	H = 21;
	M = 0;
	H += K / 60;
	M += K % 60;
	
	cout << H << ':' << M / 10 << M % 10 << endl;
}


