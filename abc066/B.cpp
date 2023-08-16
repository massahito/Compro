#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	int ans = 0;

	cin >> S;

	for(int i = 0; i < S.size() / 2; i++)
	{
		bool isgood = true;
		for(int j = 0; j < i; j++)
			if(S[j] != S[j + i])
				isgood = false;
		if(isgood)
			ans = i * 2;
	}
	cout << ans << endl;
}
