#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <utility>

using namespace std;

int main()
{
	int N;
	map<string, vector<pair<int, int>>> mp;

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		string S;
		int P;

		cin >> S >> P;
		mp[S].push_back(make_pair(P, i + 1));
		sort(mp[S].rbegin(), mp[S].rend());
	}

	for(const auto [key, value]: mp)
		for(int i = 0; i < value.size(); i++)	
			cout << value[i].second << endl;
}



