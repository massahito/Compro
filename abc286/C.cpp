#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;
int main()
{
	int			N;
	long long	A, B, ans = LLONG_MAX;
	string		S;

	cin >> N >> A >> B;
	cin >> S;

	for (int i = 0; i < N; i++)
	{
		long long	price = i * A;
		if (0 < i)	
			S = S.substr(1) + S[0];
		for (int j = 0; j < S.size() / 2; j++)
			if (S[j] != S[S.size() - j - 1])
				price += B;
		ans = min(ans, price);
	}
	cout << ans << endl;
}
