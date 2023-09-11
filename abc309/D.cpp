#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int main()
{
	int n1, n2, m;
	int ans = 0;

	cin >> n1 >> n2 >> m;

	vector<vector<int>>	A(n1), B(n2);
	vector<int>			Ad(n1, 0), Bd(n2, 0);
	set<int>			Sa, Sb;
	queue<int>			Qa, Qb;

	for(int i = 0 ; i < m; i++)
	{
		int a, b;

		cin >> a >> b;
		a--;
		b--;
		if(max(a, b) < n1)
		{
			A[a].push_back(b);
			A[b].push_back(a);
		}
		else
		{
			a -= n1;
			b -= n1;
			B[a].push_back(b);
			B[b].push_back(a);
		}
	}
	//for A;
	Sa.insert(0);
	Qa.push(0);
	while(!Qa.empty())
	{
		int idx = Qa.front();
		Qa.pop();
		for(auto x : A[idx])
		{
			if(Sa.find(x) == Sa.end())
			{
				Ad[x] = Ad[idx] + 1;
				Sa.insert(x);
				Qa.push(x);
			}
		}
	}
	//for B
	Sb.insert(n2 - 1);
	Qb.push(n2 - 1);
	while(!Qb.empty())
	{
		int idx = Qb.front();
		Qb.pop();
		for(auto x : B[idx])
		{
			if(Sb.find(x) == Sb.end())
			{
				Bd[x] = Bd[idx] + 1;
				Sb.insert(x);
				Qb.push(x);
			}
		}
	}
	ans = *max_element(begin(Ad), end(Ad)) + *max_element(begin(Bd), end(Bd)) + 1;
	cout << ans << endl;

}
			
			
