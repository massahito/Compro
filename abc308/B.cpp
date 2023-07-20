#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;
int main()
{
	int N, M;
	int price, count = 0;
	map<string, int> mp;

	cin >> N >> M;
	vector<string> C(N), D(M);
	vector<int> P(M);

	for(int i = 0; i < N; i++)
		cin >> C[i];
	for(int i = 0; i < M; i++)
		cin >> D[i];
	cin >> price;
	for(int i = 0; i < M; i++)
		cin >> P[i];
	for(int i = 0; i < M; i++)
		mp[D[i]] = P[i];
	for(int i = 0; i < N; i++)
	{
		if(mp[C[i]])	
			count += mp[C[i]];
		else
			count += price;
	}
	cout << count << endl;
}
	
	
	
