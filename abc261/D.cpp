#include <iostream>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<int> X(N), C(M), Y(M);
	
	for(int i = 0; i < N; i++)
		cin >> X[i];
	for(int i = 0; i < M; i++)
		cin >> C[i] >> Y[i];
	
}
