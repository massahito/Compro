#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string	S;
	long long ans = 0;

	cin >> S;

	for(int i = 0; i < (1<<(S.size() - 1)); i++)
	{
		long long num = 0;
		long long hello = 0;
		for(int j = 0; j < S.size(); j++)
		{
			num = num * 10 + (S[j] - '0');
			if(i & 1<<j)
			{
				hello += num;
				num = 0;
			}
		}
		hello += num;
		cout << hello << endl;
		ans += hello;
	}
	cout << ans << endl;
}
