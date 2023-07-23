#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, Q;
	
	cin >> N;
	vector<int> A(N);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	cin >> Q;
	for(int i = 0; i < Q; i++)
	{
		int q, k, x;

		cin >> q >> k;
		k--;
		if(q == 1)
		{
			cin  >> x;
			A[k] = x;
		}
		else
			cout << A[k] << endl;
	}
}
		


