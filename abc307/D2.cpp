#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(void)
{
	int			N;
	int			count = 0;
	string		S;
	stack<int>	stk;

	cin >> N;
	cin >> S;

	for(int i = 0; i < S.size(); i++)
	{
		if (S[i] == '(')
			stk.push(i);
		else if (S[i] == ')' && !stk.empty())
		{
			int start = stk.top();
			stk.pop();
			if (i + 1 < S.size())
				S = S.substr(0, start) + S.substr(i + 1);
			else
				S= S.substr(0, start);
			i = start - 1;
		}
	}
	cout << S << endl;
}
