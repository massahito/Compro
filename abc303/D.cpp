#include <iostream>
#include <string>
using namespace std;

int main()
{
	int X, Y, Z;
	long long DP[300010][2] = {0};
	string S;

	cin >> X >> Y >> Z;
	cin >> S;

	for(int i = 0; i < S.size(); i++)
	{
		if(i == 0)
		{
			if(S[i] == 'A')
			{
				DP[i][0] = Y;
				DP[i][1] = X + Z;
			}
			else
			{
				DP[i][0] = X;
				DP[i][1] = Z + Y;
			}
		}
		else if(S[i] == 'A')
		{
			DP[i][0] = min(DP[i - 1][0] + Y, DP[i - 1][1] + Z + Y);
			DP[i][1] = min(DP[i - 1][0] + Z + X, DP[i - 1][1] + X);
		}
		else
		{
			DP[i][0] = min(DP[i - 1][0] + X, DP[i - 1][1] + Z + X);
			DP[i][1] = min(DP[i - 1][0] + Z + Y, DP[i - 1][1] + Y);
		}	
	}
	cout << min(DP[S.size() - 1][0], DP[S.size() - 1][1]) << endl;
}

