#include <iostream>

using namespace std;

int main()
{
	int R, C;

	cin >> R >> C;

	R--;
	C--;
	if(R % 2)
	{
		if(C % 2 || (min(R, 15- R) <= C && C <= max(R, 15 - R)))
			cout << "white" << endl;
		else
			cout << "black" << endl;
	}
	else
	{
		if(C % 2 == 0 || (min(R, 15 - R) <= C && C <= max(R, 15 - R)))
			cout << "black" << endl;
		else
			cout << "white" << endl;
	}
}
