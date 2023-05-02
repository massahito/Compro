#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;

	cin >> S;

	for(int i = 0; i < 6 / S.size(); i++)
		for(int  j = 0; j < S.size(); j++)
				cout << S[j];
	cout << endl;
}
