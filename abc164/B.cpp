#include <iostream>

using namespace std;

int main()
{
<<<<<<< HEAD
	int A, B, C, K
	int ans = 0;

	cin >> A >> B >> C >> K;
	
	
=======
	int A, B, C, D;

	cin >> A >> B >> C >> D;
	while(1)
	{
		C -= B;
		if(C <= 0)
		{
			cout << "Yes" << endl;
			break;
		}
		A -= D;
		if(A <= 0)
		{
			cout << "No" << endl;
			break;
		}
	}
	return (0);
}
>>>>>>> 1d3abbfb078244991aa0ada997518cb98f10c851
