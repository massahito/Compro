#include <iostream>

using namespace std;

int main()
{
	int x1, x2, y1, y2;
	
	cin >> x1 >> y1 >> x2 >> y2;

	int x3 = (y2 - y1) * -1 + x2;
	int y3 = (x2 - x1) * 1 + y2;
	cout << x3 << " " << y3 << " ";
	int x4 = (y3 - y2) * -1 + x3;
	int y4 = (x3 - x2) * 1 + y3;
	cout << x4 << " " << y4 << endl;
}


