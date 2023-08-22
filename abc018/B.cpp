#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string	S;
	int		N;

	cin >> S;
	cin >> N;

	for(int i = 0; i < N; i++)
	{
		int l, r;
		cin >> l >> r;

		string	T = S.substr(l - 1, r - l + 1);
		reverse(T.begin(), T.end());

		for(int j = 0; j < r - l + 1; j++)
			S[l - 1 + j] = T[j];
	}
	cout << S << endl;
}
