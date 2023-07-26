#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long A, B;	

	cin >> A >> B;

	while(A && B)
	{
		int a = A % 10;
		int b = B % 10;

		if(10 <= a + b)
		{
			cout << "Hard" << endl;
			return (0);
		}
		A /= 10;
		B /= 10;
	}
	cout << "Easy" << endl;
	return (0);
}
