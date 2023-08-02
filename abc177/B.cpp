#include <iostream>
#include <string>
#define INF 1<<30
using namespace std;

int main()
{
	string S, T;
	int ans = INF;

	cin >> S;
	cin >> T;
	
	for(int i = 0; i < S.size(); i++)
	{
		int count = 0;
		if (S.size() < i + T.size())
			break;
		for(int j = 0; j < T.size(); j++)
			if(S[i + j] != T[j])
				count++;
		ans = min(ans, count);
	}
	cout << ans << endl;
}

