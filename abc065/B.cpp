#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int N;
	set<int> S;
	int count = 0;

	cin >> N;
	vector<int> A(N);
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		A[i]--;
	}
	int a = 0;
	while(a != 1)
	{
		if(S.find(a) != S.end())
		{
			cout << -1 << endl;
			return (0);
		}
		S.insert(a);
		a = A[a];
		count++;
	}
	cout << count << endl;
}
