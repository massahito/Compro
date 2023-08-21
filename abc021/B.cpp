#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> S;
	int N, K, a, b;

	cin >> N;
	cin >> a >> b;
	S.insert(a);
	S.insert(b);
	cin >> K;
	for(int i = 0; i < K; i++)
	{
		int p;

		cin >> p;
		if(S.find(p) != S.end())
		{
			cout << "NO" << endl;
			return (0);
		}
		S.insert(p);
	}
	cout << "YES" << endl;
}



