#include <iostream>
#include <vector>
#include <climits>
#include <cmath>


using namespace std;

int main()
{
	int N, K;
	double dist_max = 0;

	cin >> N >> K;
	vector<int> A(K);
	vector<long long> X(N), Y(N);
	for(int i = 0; i < K; i++)
	{
		cin >> A[i];
		A[i]--;
	}
	for(int i = 0; i < N; i++)
		cin >> X[i] >> Y[i];
	for(int i = 0; i < N; i++)
	{
		double dist = INT_MAX;
		for(int j = 0; j < K; j++)
			dist = min(dist, sqrt(pow(abs(X[i] - X[A[j]]), 2) + pow(abs(Y[i] - Y[A[j]]), 2)));
		dist_max = max(dist_max, dist);
	}
	printf("%10f\n", dist_max);
}
