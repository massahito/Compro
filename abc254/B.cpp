#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int N;

	cin >> N;

	vector<int> A(N, 1);
	
	for(int i = 0; i < N; i++)
	{
		vector<int> B = A;
		for(int j = 1; j < i; j++)
			B[j] = A[j - 1] + A[j];
			
		for(int j = 0; j <= i; j++)
			cout << B[j] << " ";
		A = B;
		cout << endl;
	}
}
	
