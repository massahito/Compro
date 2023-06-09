#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, count;
	int a, b;

	cin >> N;
	vector<int> P(N), Q(N), O(N);

	for(int i = 0; i < N; i++)
		O[i] = i + 1;
	for(int i = 0; i < N; i++)
		cin >> P[i];
	for(int i = 0; i < N; i++)
		cin >> Q[i];
	count = 0;
	do
	{
		count++;
		if(P == O)
			a = count;
		if(Q == O)
			b = count;
	} while(next_permutation(O.begin(), O.end()));

	cout << abs(a - b) << endl;
}
