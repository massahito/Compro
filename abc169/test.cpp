#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long N = 1000000000000000001;

	if(pow(10, 18) < N)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	if(pow((double long)10, 18) < N)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
