#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int flag = 0;
	string S, R;
	long long N, n, ans;

	cin >> S;
	cin >> N;

	n = N;
    while (n != 0)
	{
        R += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
	cout << R << endl;
/*
	ans = 0;
	if(S.size() < R.size())
	{
		for(int i = 0; i < S.size(); i++)
			if(S[i] == '?')
				S[i] = '1';
		n = 1;
		for(int i = S.size() - 1; 0 <= i; i++)
		{
			ans += (S[i] - '0') * n;
			n *= 2;
		}
		cout << ans << endl;
	}

	else
	{
		for(int i = 0; i < S.size() - R.size(); i++)
			if(S[i] == '?')
				S[i] = 0;
	}
*/
}
