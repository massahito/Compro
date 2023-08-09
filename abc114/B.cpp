#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	int diff = 1<<30;

	cin >> S;

	for(int i = 0; i < S.size(); i++)
	{
		int num = 0;
		for(int j = i; j < i + 3 && j < S.size(); j++)
			num = num * 10 + (S[j] - '0');
		diff = min(diff, abs(753 - num));
	}
	cout << diff << endl;
}

		
