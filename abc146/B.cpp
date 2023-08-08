#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	string S;

	cin >> N;
	cin >> S;
	for(char x : S)
		cout << (char)('A' + (x - 'A' + N) % 26);
	cout << endl;
}
