#include <iostream>
#include <vector>
#include <iterator>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int N, T, c, first;
	map<int, vector<int>> C;

	cin >> N >> T;
	vector<int> R(N);
	for (int i = 1; i <= N; i++)
	{
		cin >> c;
		if(i == 1)
			first = c;
		C[c].push_back(i);
	}
	for (auto &e: R)
		cin >> e;
	if (C[T].size() == 0)
		T = first; 

	int biggest = 0;
	int	ans = 0;
	for(auto &e: C[T])
	{
		if(biggest < R[e - 1])
		{
			biggest = R[e - 1];
			ans = e;
		}
	}
	cout << ans << endl;
}
	
		
