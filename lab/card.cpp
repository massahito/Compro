#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

int main()
{
	int N, k;

	cin >> N;
	cin >> k;
	vector<int> A(N), P(N);
	set<long long> S;
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		P[i] = i;
	}
	
	do
	{
		long long num = 0;;
		for(int i = 0; i < k; i++)
			num = A[P[i]] + num * pow(10, (int)log10(A[P[i]]) + 1);
		S.insert(num);
	} while(next_permutation(P.begin(), P.end()));
	cout << S.size() << endl;
}
