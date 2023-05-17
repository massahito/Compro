#include <iostream>

using namespace std;

int main()
{
	int L, R;
	char arr[] = "atcoder";
	cin >> L >> R;

	for(int i = L - 1; i < R; i++)
		cout << arr[i];
	cout << endl;
}
	
