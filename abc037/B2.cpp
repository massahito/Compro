#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, Q;

	cin >> N >> Q;
	vector<int> A(N, 0);
	for(int i = 0; i < Q; i++)
	{
		int L, R, T;

		cin >> L >> R >> T;
		L--;
		R--;
		for(int j = L; j <= R; j++)
			A[j] = T;
	}

	for(int i = 0; i < N; i++)
		cout << A[i] << endl;
}
