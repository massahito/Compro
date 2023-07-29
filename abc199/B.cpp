#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int> A(N), B(N);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < N; i++)
		cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	if(0 <= B[0] - A[N - 1])
		cout << B[0] - A[N - 1] + 1 << endl;
	else
		cout << 0 << endl;
}

