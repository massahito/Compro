#include <iostream>

using namespace std;

int main()
{
	int N;
	double ans = 0;

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		double a;
		cin >> a;
		ans += (1.0 / a);
	}
	printf("%0.10f\n",  1 / ans);
}


