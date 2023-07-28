#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int> A(N);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	for(int i = 0; i < N; i++)
	{
		if(i + 1 != A[i])
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}


	
