#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, D;
	int ans = 0, count = 0;

	cin >> N >> D;
	vector<vector<bool>> S(N, vector<bool> (D));
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < D; j++)
		{
			char s;
			cin >> s;
			if(s == 'o')
				S[i][j] = true;
			else
				S[i][j] = false;
		}
	}
	
	for(int j = 0; j < D; j++)
	{
		bool isallfree = true;
		for(int i = 0; i < N; i++)
			if(!S[i][j])	
				isallfree = false;
		if(!isallfree)
		{
			ans = max(ans, count);
			count = 0;
		}
		else
			count++;
	}
	ans = max(ans, count);
	cout << ans << endl;
}
