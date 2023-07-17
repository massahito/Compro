#include <iostream>

using namespace std;

int main()
{
	int price, change, count = 0;
	int arr[] = {500, 100, 50, 10, 5, 1};

	cin >> price;
	change = 1000 - price;

	while(0 < change)
	{
		for(int x: arr)
		{
			if (x <= change)
			{
				count += (change / x);
				change = change - x * (change / x);
			}
		}
	}
	cout << count << endl;
}
		
