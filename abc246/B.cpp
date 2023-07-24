#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;

	printf("%0.10f %0.10f\n", A / sqrt(pow(A, 2) + pow(B, 2)), B / sqrt(pow(A, 2) + pow(B, 2)));
}
