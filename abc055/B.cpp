#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N;
	long long power = 1;

	cin >> N;

	for(int i = 1; i <= N; i++)
	{
		power *= i;
		power %= ((int)pow(10, 9) + 7);
	}

	cout << power << endl;
}
