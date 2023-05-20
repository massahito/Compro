#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int N, M, T;

	cin >> N >> M >> T;
	vector<int> A(N - 1);
	map<int, int> mp;
	for(int i = 0; i < N - 1; i++)
		cin >> A[i];
	for(int i = 0; i < M; i++)
	{
		int X, Y;
		cin >> X >> Y;
		mp[X - 1] = Y;
	}
	
	long long agg = 0;
	for(int i = 0; i < N - 1; i++)
	{
		if(mp[i])
			agg -= mp[i];
		agg += A[i];
		if(T <= agg)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
