#include <iostream>
#include <set>
using namespace std;

int main()
{
	int N, K;
	int asn;
	cin >> N >> K;
	vector<int>	A(K);
	vector<long long> X(N), Y(N);
	for(int i = 0; i < K; i++)
		cin >> A[i];
	for(int i = 0; i < N; i++)
		cin >> X[i] >> Y[i];
	for(int i = 0; i < N; i++)
	{
		long long dist = 
		for(int j = 0; j < K; j++)
			dist = min(dist, (X[i] - X[A[j]]) * (X[i] - X[A[j]]) + (Y[i] - Y[A[j]]) * (Y[i] - Y[A[j]]));
			max(dist, ans)


