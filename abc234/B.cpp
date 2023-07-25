#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int N;
	double max_length = 0;

	cin >> N;
	vector<int> x(N), y(N);
	for(int i = 0; i < N; i++)
		cin >> x[i] >> y[i];

	for(int i = 0; i < N; i++)
		for(int j = i + 1; j < N; j++)
			max_length = max(max_length, sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)));
	printf("%0.10f\n", max_length);
}
