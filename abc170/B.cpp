#include <iostream>

using namespace std;

int main()
{
	int X, Y;

	cin >> X >> Y;
	for(int i = 0; i <= X; i++)
	{
		if(i * 2 + 4 * (X - i) == Y)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
}
