#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int N;
	long long ans = 1, before = 0;

	cin >> N;
	vector<long long> A(N);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	for(int i = 0; i < N; i++)
	{
		if(A[i] && pow((long double)10, 18)/ A[i] < ans)
		{
			cout << -1 << endl;
			return (0);
		}
		else
			ans *= A[i];
			
	}
	cout << ans << endl;
}
	
