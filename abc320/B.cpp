#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string		S;
	int			ans = 0;
	cin >> S;

	for (int i = 0; i < S.size(); i++)
	{
		for (int j = S.size() - 1; i <= j; j--)	
		{
			bool isgood  = true;
			for (int k = i; k <= j; k++)
			{
				if (S[k] != S[j - (k - i)])	
				{
					isgood = false;
					break;
				}
			}
			if (isgood)
				ans = max(ans, j - i + 1);
		}
	}
	cout << ans << endl;
}
