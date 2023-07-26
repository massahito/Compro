#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int N, X, count = 0;

	cin >> N >> X;
	vector<int> A(N);
	vector<bool> B(N, false);
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		A[i]--;
	}
	X--;
	for(int i = 0; i < N; i++)
	{
		B[X] = true;
		X = A[X];
	}
	for(int i = 0; i < N; i++)
		if(B[i] == true)
			count++;
	cout << count << endl;
}


