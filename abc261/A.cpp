#include <iostream>

using namespace std;


int main()
{
	int L1, L2, R1, R2;
	int L, R;

	cin >> L1 >> R1 >> L2 >> R2;

	L = max(L1, L2);
	R = min(R1, R2);

	if(L < R)
		cout << R - L << endl;
	else
		cout << 0 << endl;
	return (0);
}
