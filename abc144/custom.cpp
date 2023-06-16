#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;
	vector<int> A(N);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	int l = 0, r = N - 1;

	while(r - l > 1)
	{
		int middle = (r + l) / 2;
		if(K <= A[middle])
			r = middle;
		else
			l = middle;
	}
	if(K <= A[r])
		cout << r << endl;
	else
		cout << -1 << endl;
			
}

