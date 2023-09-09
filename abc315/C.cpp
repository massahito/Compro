#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int			N;
	long long	sum = 0, ans = 0;	

	cin >> N;
	vector<long long>	A(N);

	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		sum += A[i];
	}
	long long mid = sum / N;
	for(int i = 0; i < N; i++)
		ans = abs(mid - A[i]);
	if(sum % N)
		ans++;
	cout << ans << endl;
}
		

		
