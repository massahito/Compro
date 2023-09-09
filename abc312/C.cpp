#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int		N, M;

	cin >> N >> M;

	vector<int> A(N), B(M);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < M; i++)
		cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int		a = 0, b = 0;
	for(int i = 0; i < max(A[N - 1], B[M - 1]); i++)
	{
		if (a < N && A[a] <= i)	
			a++;
		if (b < M && B[b] <= i)
			b++;
		if(b != 0 && (M - b) <= a)
		{
			if (M - b)
				cout << i << endl;
			else
				cout << i + 1 << endl;
			return (0);
		}

	}
}


	
