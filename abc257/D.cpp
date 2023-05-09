#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int> X(N), Y(N), P(N), I(N);

	for(int i = 0; i < N; i++)
		cin >> X[i] >> Y[i] >> P[i];
	for(int i = 0; i < N; i++)
	{
		int min = INF;
		for(int j = 0; j < N; j++)
		{
			if(i != j && abs(X[i] - X[j]) + abs(Y[i] - Y[j]) / P[j])
				min = 
			else if(i != j && abs(X[i] - X[j]) + abs(Y[i] - Y[j]) / P[i])



