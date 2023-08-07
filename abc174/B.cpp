#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, D, count = 0;

	cin >> N >> D;
	for(int i = 0; i < N; i++)
	{
		double x, y;
		cin >> x >> y;
		if (sqrt(x * x + y * y) <= D)
			count++;
	}
	cout << count << endl;
}
