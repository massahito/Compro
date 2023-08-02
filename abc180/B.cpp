#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int N;
	long long m = 0, y = 0, c = 0;
	
	cin >> N;
	vector<long long> X(N);
	for(int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		X[i] = abs(x);
	}
	for(int i = 0; i < N; i++)
	{
		m += X[i];
		y += (X[i] * X[i]);
		c = max(c, X[i]);
	}
	cout << m << endl;
	printf("%0.10f\n", sqrt(y));
	cout << c << endl;
}
