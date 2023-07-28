#include <iostream>

using namespace std;
int main()
{
	int A, B, C, D;
	
	cin >> A >> B >> C >> D;
	
	if(D * C - B <= 0)
		cout << -1 << endl;
	else if (A % (D * C - B))
		cout << A / (D * C - B) + 1 << endl;
	else
		cout << A / (D * C - B) << endl;
	return (0);
}
