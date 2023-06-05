#include <iostream>
#include <string>

using namespace std;

int X, Y, Z;
string S;
long long dfs(int index, long long ans, bool caps)
{
	if(S.size() == index)
		return (ans);
	if(S[index] == 'a')
	{
		if(caps)
			ans = min(dfs(index + 1, ans + X + Z, false), dfs(index + 1, ans + Y, true));
		else
			ans = min(dfs(index + 1, ans + X, false),  dfs(index + 1, ans + Y + Z, true));
	}
	else
	{
		if(caps)
			ans = min(dfs(index + 1, ans + X, true), dfs(index + 1, ans + Y + Z, false));
		else
			ans = min(dfs(index + 1, ans + X + Z, true), dfs(index + 1, ans + Y, false));
	}
	return (ans);
}
	

int main()
{

	cin >> X >> Y >> Z;
	cin >> S;
	cout << dfs(0, 0, false) << endl;
}
	

