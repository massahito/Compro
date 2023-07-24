#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	map<int, int> mp;
	vector<int> B(M);
	for(int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		mp[a]++;
	}
	for(int i = 0; i < M; i++)
		cin >> B[i];
	for(int i = 0; i < M; i++)
	{
		if(mp[B[i]] <= 0)		
		{
			cout << "No" << endl;
			return (0);
		}
		else
			mp[B[i]]--;
	}
	cout << "Yes" << endl;
}
