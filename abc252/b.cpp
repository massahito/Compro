#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, K, tmp = 0;

	cin >> N >> K;

	vector<int> A(N), B(K);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < K; i++)
	{
		int idx;
		cin >> idx;
		idx--;
		tmp = max(tmp, A[idx]);
	}
	sort(A.begin(), A.end());
	if(tmp == A[A.size() - 1])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}

