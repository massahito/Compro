#include <iostream>
#include <string>
#include <set>
#include <utility>

using namespace std;

int main()
{
	int N, M, H, K;
	set<pair<int, int>> U;
	string S;

	cin >> N >> M >> H >> K;
	cin >> S;

	for(int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;
		U.insert(make_pair(x, y));
	}

	int X = 0, Y = 0;
	for(int i = 0; i < N; i++)
	{
		H--;
		if(H < 0)
		{
			cout << "No" << endl;
			return 0;
		}
		if(S[i] == 'R')
			X++;	
		else if(S[i] == 'L')
			X--;
		else if(S[i] == 'U')
			Y++;
		else if(S[i] == 'D')
			Y--;
		if(U.find(make_pair(X, Y)) != U.end() && H < K)
		{
			H = K;
			U.erase(make_pair(X, Y));
		}
	}
	cout << "Yes" << endl;
	return 0;
}
