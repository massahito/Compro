#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	double price = 0;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		double x;
		string u;

		cin >> x >> u;

		if(u == "BTC")
			price += (x * 380000);
		else
			price += x;
	}
	printf("%0.10f\n", price);
}
			
