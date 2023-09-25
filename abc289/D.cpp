#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int		N, M, X;

	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];
	cin >> M;
	set<int> B;
	for (int i = 0; i < M; i++)
	{
		int		b;
		cin >> b;
		B.insert(b);
	}
	cin >> X;
	vector<bool>	V(X + 1, false);
	
	V[0] = true;
	for (int i = 0; i < X; i++)
	{
		if (V[i] == false)
			continue ;
		for (auto a : A)
		{
			int idx = a + i;
			if (idx <= X && B.find(idx) == B.end())
				V[idx] = true;
		}
	}
	if (V[X])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
