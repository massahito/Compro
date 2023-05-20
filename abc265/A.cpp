#include <iostream>

using namespace std;

int main()
{
	int X, Y, N;
	int price;

	cin >> X >> Y >> N;
	
	if(N < 3)
	{
		cout << X * N << endl;
		return 0;
	}

	price = min(X * 3, Y);
	cout << price * (N / 3) + X * (N % 3) << endl;
	return 0;
}
