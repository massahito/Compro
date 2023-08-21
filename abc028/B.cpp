#include <iostream>
#include <string>

using namespace std;

int main()
{
	string	S;
	int		arr[6] = {0};

	cin >> S;

	for(int i = 0; i < S.size(); i++)
		arr[S[i] - 'A']++;
	for(int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << arr[5] << endl;
}

	
