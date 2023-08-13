#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int K;
	vector<int> A(3);

	cin >> A[0] >> A[1] >> A[2] >> K;
	sort(A.begin(), A.end());
	while(K)
	{
		A[2] *= 2;
		K--;
	}
	cout << A[0] + A[1] + A[2] << endl;
}
