#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	int N, count = 0;
	string S;

	cin >> N;
	cin >> S;
	for(int i = 0; i < S.size(); i++)
		if(!strncmp(&(S[i]), "ABC", 3))
			count++;
	cout << count << endl;
}
