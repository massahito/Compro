#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a, b;
	int sum = 0;

	cin >> a >> b;

	for(int i = 1; i < b - a; i++)
		sum += i;
	cout << sum - a << endl;
}
