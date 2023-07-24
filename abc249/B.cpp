#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	string S;
	bool	islow = false;
	bool	isupp = false;
	set<char> st;

	cin >> S;
	
	for(int i = 0; i < S.size(); i++)
	{
		if(st.find(S[i]) != st.end())	
		{
			cout << "No" << endl;
			return (0);
		}
		else
			st.insert(S[i]);
		if('A' <= S[i] && S[i] <= 'Z')
			isupp = true;
		if('a' <= S[i] && S[i] <= 'z')
			islow = true;
	}
	if(islow && isupp)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
