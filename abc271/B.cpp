#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, Q;

	cin >> N >> Q;

	vector<vector<int>> A(N);
	for(int i = 0; i < N; i++)
	{
		int L;
		cin >> L;
		for(int j = 0; j < L; j++)
		{
			int a;
			cin >> a;
			A[i].push_back(a);
		}
	}
	for(int i = 0; i < Q; i++)
	{
		int s, q;

		cin >> s >> q;
		s--;
		q--;
		cout << A[s][q] << endl;
	}
}
	
