#include <iostream>

using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;

	if(B < 10)
		A *= 10;
	else if(B < 100)
		A *= 100;
	else if(B < 1000)
		A *= 1000;
	cout << (A + B) * 2 << endl;
}
	
