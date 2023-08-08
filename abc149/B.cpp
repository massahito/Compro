#include <iostream>

using namespace std;

int main()
{
	long long A, B, K, ans;

	cin >> A >> B >> K;
	
	ans = A - min(A, K);
	K = K - A;
	if(0 < K)
		B = B - min(B, K);
	cout << ans << " " << B << endl;
}
