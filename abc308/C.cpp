#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int		N;

	cin >> N;
	vector<double>	P(N);
	map<double, vector<int>> mp;
	for(int i = 0; i < N; i++)
	{
		double a, b;

		cin >> a >> b;
		mp[a /(a + b)].push_back(i);
	}
	for(auto iter = mp.rbegin(); iter != mp.rend(); iter++)
	{
		for(auto x : iter->second)
			cout << x + 1 << " ";
	}
	cout <<endl;
}
