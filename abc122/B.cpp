#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	int ans = 0, count = 0;

	cin >> S;

	for(int i = 0; i < S.size(); i++)
	{
		if(S[i] == 'A' || S[i] == 'C' || S[i] == 'T' || S[i] == 'G')
			count++;
		else
		{
			ans = max(ans, count);
			count = 0;
		}
	}
	ans = max(ans, count);
	cout << ans << endl;
}
