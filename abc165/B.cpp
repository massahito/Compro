#include <iostream>

using namespace std;

int main()
{
	long long price = 100, X;
	int year = 0;

	cin >> X;
	while(price < X)
	{
		year++;
		price = price + price / 100;
	}
	cout << year << endl;
}

