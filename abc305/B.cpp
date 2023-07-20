#include <iostream>

using namespace std;

int main()
{
	int arr[] = {0, 3, 4, 8, 9, 14, 23};
	char p, q;
	cin >> p >> q;
	cout << arr[max(p, q) - 'A'] - arr[min(p, q) - 'A'] << endl;
}
