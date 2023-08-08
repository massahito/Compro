#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	int count = 0;
	cin >> S;

	for(int i = 0; i < S.size() / 2; i++)
		if(S[i] != S[S.size() - 1 - i])
			count++;
	cout << count << endl;
}
