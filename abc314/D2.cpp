#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(void)
{
	int		N, Q, last = 0, count = 0;

	cin >> N;

	vector<int> O(N, 0);
	string	S;

	cin >> S;
	cin >> Q;
	for(int i = 0; i < Q; i++)
	{
		int		t, x;
		char	c;

		cin >> t >> x >> c;
		x--;	
		if(t == 1)
		{
			S[x] = c;
			O[x] = i + 1;
		}
		else if(t == 2)
		{
			last = t;
			count = i + 1;
		}
		else if (t == 3)
		{
			last = t;
			count = i + 1;
		}
	}

	for(int i = 0; i < N; i++)
	{
		if(O[i] < count)
		{
			if(last == 2)	
				S[i] = tolower(S[i]);
			else if (last == 3)
				S[i] = toupper(S[i]);
		}
	}
	cout << S << endl;
}
				
