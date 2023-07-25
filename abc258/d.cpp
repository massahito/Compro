#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N ,X;

	cin >> N >> X;
	vector<vector<int>> A(N), B(N);

	for(int i = 0; i < N; i++)
		cin >> A[i] >> B[i];
