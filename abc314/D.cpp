#include <iostream>
#include <string>

using namespace std;


void	to_lower(string &S)
{
	for (int i = 0; i < S.size(); i++)
		if ('A' <= S[i] && S[i] <= 'Z')
			S[i] = (S[i] - 'A') + 'a';
}

void	to_upper(string &S)
{
	for (int i = 0; i < S.size(); i++)
		if ('a' <= S[i] && S[i] <= 'z')
			S[i] = (S[i] - 'a') + 'A';
}
	
int main()
{
	int		N, Q;
	string	S;

	cin >> N;
	cin >> S;
	cin >> Q;
	for(int i = 0; i < Q; i++)
	{
		int		t, x;
		char	c;

		cin >> t >> x >> c;

		if (t == 1)
			S[x - 1] = c;
		else if (t == 2)
			to_lower(S);
		else
			to_upper(S);
	}
	cout << S << endl;
}
