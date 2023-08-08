#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, L, sum = 0;
	int diff = 1<<30;

	cin >> N >> L;
	vector<int> A(N);

	for(int i = 0; i < N; i++)
	{
		A[i] = L + i;
		if(abs(A[i]) < abs(diff))
			diff = A[i];
		sum += A[i];
	}
	cout << sum - diff << endl;
}

	
	
