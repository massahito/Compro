#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int H, W;
	set<int> s;

	cin >> H >> W;
	vector<string> M;
	for(int i = 0; i < H; i++)
	{
		string S;
		bool isgood = false;
		cin >> S;
		for(int j = 0; j < W; j++)
			if(S[j] == '#')
				isgood = true;
		if(isgood)
			M.push_back(S);
	}
	for(int j = 0; j < W; j++)
	{
		bool isgood = true;
		for(int i = 0; i < M.size(); i++)
			if(M[i][j] == '#')
				isgood = false;
		if(isgood)
			s.insert(j);
	}

	for(int i = 0; i < M.size(); i++)
	{
		for(int j = 0; j < W; j++)
			if(s.find(j) == s.end())
				cout << M[i][j];
		cout << endl;
	}
}
