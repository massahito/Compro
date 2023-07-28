#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, count = 0;

	cin >> N;
	vector<int> A(N);

	for(int i = 0; i < N; i++)
		cin >> A[i];

	for(int i = 0; i < N; i++)
		if(10 < A[i])
			count += (A[i] - 10);
	cout << count << endl;
}
