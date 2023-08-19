#include <iostream>

using namespace std;

int main()
{
	int A, B, C;

	cin >> A >> B >> C;

	for(int i = 1; i <= 101; i++)
	{
		if((A * i) % B == C)
		{
			cout << "YES" << endl;
			return (0);
		}
	}
	cout << "NO" << endl;
	return (0);
}
