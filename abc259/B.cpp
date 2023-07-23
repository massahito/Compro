#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.141592653589;
int main()
{
	double a, b, d;

	cin >> a >> b >> d;
	double rad = d * pi / 180.0;
	double X = cos(rad) * a - sin(rad) * b;
	double Y = sin(rad) * a + cos(rad) * b;

	printf("%0.10f  %0.10f\n", X, Y);
}
