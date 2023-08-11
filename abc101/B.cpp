#include <iostream>

using namespace std;

int main()
{
	int N, C;
	int d = 0;

	cin >> N;

	C = N;
	while(C)
	{
		d += (C % 10);
		C /= 10;
	}
	if(N % d == 0)	
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}


