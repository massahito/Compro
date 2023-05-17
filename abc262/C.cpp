#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int N;
	long long  count, same;

	cin >> N;
	
	vector<int> A(N);
	map<int, int> mp;

	for(int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		A[i] = a - 1;
		mp[A[i]] = i;
	}

	count = 0;
	same = 0;
	for(int  i = 0; i < N; i++)
	{
		if(A[i] == i)
		{
			same++;
			continue;
		}
		if(A[i] > i && A[mp[i]] == i)
			count++;
	}
	cout << count + same * (same - 1) / 2 << endl;

}
