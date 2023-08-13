#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M, X;
	int costN = 0, cost0 = 0;

	cin >> N >> M >> X;
	vector<int> T(N, 0);
	for(int i = 0; i < M; i++)
	{
		int a;
		cin >> a;
		a--;
		T[a] = 1;
	}

	for(int i = X - 1; i < N; i++)
		if(T[i])
			costN++;
	for(int i = X - 1; 0 <= i; i--)
		if(T[i])
			cost0++;
	cout << min(costN, cost0) << endl;
}

