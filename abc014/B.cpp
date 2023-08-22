#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, X, sum = 0;

	cin >> n >> X;
	vector<int> A(n);
	for(int i = 0; i < n; i++)
		cin >> A[i];
	for(int i = 0; i < 20; i++)
		if(1 << i & X)
			sum += A[i];
	cout << sum << endl;
}
		
