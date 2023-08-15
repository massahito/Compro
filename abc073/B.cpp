#include <iostream>
#include <string>

using namespace std;
int main()
{
	string S;
	int arr[26]	= {0};

	cin >> S;

	for(int i = 0; i < S.size(); i++)
		arr[S[i] - 'a']++;
	for(int i = 0; i < 26; i++)
	{
		if(!arr[i])
		{
			cout << (char)('a' + i) << endl;
			return (0);
		}
	}
	cout << "None" << endl;
}
