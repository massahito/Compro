#include <iostream>

using namespace std;

int main()
{
	int N;
	long long ans = 0;

	cin >> N;
	int A[N], B[N];

	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < N; i++)
		cin >> B[i];
	for(int i = 0; i < N; i++)
		ans += (A[i] * B[i]);
	if(ans == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
