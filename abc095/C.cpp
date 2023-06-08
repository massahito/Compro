#include <iostream>
#include <climits>

using namespace std;
int main()
{
	int A, B, C, X, Y;
	long long price = LONG_MAX;

	cin >> A >> B >> C >> X >> Y;

	for(int i = 0; i <= 2 * max(X, Y); i++)
	{
		long long tmp;
		if(i % 2)
			continue;
		tmp = i * C;
		if(0 < X - i / 2)
			tmp += (A * (X - i / 2));
		if(0 < Y - i / 2)
			tmp += (B * (Y - i / 2));
		if(tmp < price)
			price = tmp;
	}
	cout << price << endl;
}
				
		
