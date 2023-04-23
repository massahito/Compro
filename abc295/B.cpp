#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int R, C;
	cin >> R >> C;
	vector <string> b(R);
	vector mp(R, vector<bool>(C));
	for(string &s: b) cin >> s;
	
	for(int i = 0; i < R; i++)
	{
		for(int  j = 0; j < C; j++)
		{
			if(!isdigit(b[i][j]))
				continue;
			int range =  b[i][j] - '0';
			for(int ni = 0; ni < R; ni++)
				for(int  nj = 0; nj < C; nj++)
					if(abs(i - ni) + abs(j - nj) <= range)
						mp[ni][nj] = true;
		}
	}
	for(int i = 0; i < R; i++)
		for(int  j = 0; j < C; j++)
			if(mp[i][j]) b[i][j] = '.';
	for(string &s: b) cout << s << endl;
		
}

