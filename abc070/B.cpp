#include <iostream>

using namespace std;

int main()
{
	int A, B, C, D;
	int ans;

	cin >> A >> B >> C >> D;

	ans = min(B, D) -  max(A, C);
	if(0 < ans)
		cout << ans << endl;
	else
		cout << 0 << endl;
}
