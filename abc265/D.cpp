#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	long long N, P, Q, R;
	long long sum = 0;
	map<long long, int> mp;

	cin >> N >> P >> Q >> R;
	vector<int> A(N);
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		sum += A[i];
		mp[sum] = i + 1;
	}
	sum = 0;
	for(int i = 0; i < N; i++)
	{
		sum += A[i];
		if(P <= sum)
			if(mp[sum - P] && mp[sum + Q] && mp[sum + Q + R])
			{
				cout << "Yes" << endl;
				return 0;
			}
		else
			if(mp[P] && mp[P + Q] && mp[P + Q + R])
			{
				cout << "Yes" << endl;
				return 0;
			}

	}
	cout << "No" << endl;
}
				

