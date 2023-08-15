#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, bob = 0, alice = 0;
	cin >> N;
	vector<int> A(N);

	for(int i = 0; i < N; i++)
		cin >> A[i];
	sort(A.rbegin(), A.rend());
	for(int i = 0; i < N; i++)
	{
		if(i % 2)
			bob += A[i];
		else
			alice += A[i];
	}
	cout << alice - bob << endl;
}
	
