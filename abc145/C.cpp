#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int N, count = 0;
	long double ans = 0;

	cin >> N;
	
	vector<int> P(N);
	vector<double> X(N), Y(N);
	for(int i = 0; i < N; i++)
	{
		cin >> X[i] >> Y[i];
		P[i] = i;
	}
	do
	{
		double agg = 0;
		for(int i = 0; i < N - 1; i++)
			agg += sqrt(pow(X[P[i]] - X[P[i + 1]], 2) + pow(Y[P[i]] - Y[P[i + 1]], 2));
		ans += agg;
		count++;

	} while(next_permutation(P.begin(), P.end()));
	printf("%.10LF\n", ans / count);
}

