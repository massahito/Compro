#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int		N, X;
	vector<bool>	P(20000, false);

	cin >> N >> X;
	vector<int>	A(N), B(N);
	for (int i = 0; i < N; i++)
		cin >> A[i] >> B[i];
	P[0] = true;
	for (int i = 0; i < N; i++)
	{
		set<int>	S;
		for (int j = 1; j <= B[i]; j++)
		{
			for (int k = 0; k <= X; k++)
			{
				if (!P[k] || S.find(k) != S.end())
					continue ;
				S.insert(k + A[i] * j);
				if (k + A[i] * j <= X)
					P[k + A[i] * j] = true;
			}
		}
	}
	if (P[X])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
		

