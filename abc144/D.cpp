#include <iostream>
#include <cmath>
using namespace std;

static const double pi = 3.141592653589793;
int main()
{
	int a, b, x;
	double hight;

	cin >> a >> b >> x;
	hight = x / (a * a);
	
	double bankA = pi / 2;
	double bankB = 0.0000001;
	

	while(0.000001 < bankA - bankB)
	{
		double middle = (bankA + bankB) / 2;
		if(hight / sin(middle) <= (double)b)
			bankA = middle;
		else
			bankB = middle;
	}

	cout << bankA * 180 / pi << endl;
}




