#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N;
	int count = 0; 
	int max_diff = 0; 

	 cin >> N;
	 vector<int> A(N), B(N + 2);
	 for(int i = 0; i < N; i++)
	 	cin >> A[i];
	B[0] = 0;
	for(int i = 0; i < N; i++)
	{
		count += A[i];
		B[i + 1] = count % 360;
	}
	B[N + 1] = 360;
	sort(B.begin(), B.end());
	for(int i = 0; i < N + 1; i++)
		max_diff = max(max_diff, B[(i + 1)] - B[i]);
	cout << max_diff << endl;
}

	
