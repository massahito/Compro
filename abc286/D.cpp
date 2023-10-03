#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main()
{
	long long	N, X;

	cin >> N >> X;
	vector<long long>	A(N), B(N);
	vector<bool>		P(X * 2, false);

	for (long long i = 0; i < N; i++)
		cin >> A[i] >> B[i];
		
	P[0] = true;
	for (long long i = 0; i < N; i++)	
	{
		set<long long>	S;
		for (long long j = 1; j <= B[i]; j++)
		{
			for (long long k = 0; k <= X; k++)
			{
				if (!P[k] || S.find(k) != S.end())
					continue ;
				if (k + A[i] * j <= X)	
				{
					P[k + A[i] * j] = true;
					S.insert(k + A[i] * j);
				}
			}
		}
	}
	if (P[X])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}


