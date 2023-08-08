#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, sum = 0;

	cin >> N;
	vector<int> P(N);

	for(int i = 0; i < N; i++)
		cin >> P[i];
	sort(P.begin(), P.end());
	for(int i = 0; i < N - 1; i++)
		sum += P[i];
	cout << sum + P[N - 1] / 2 << endl;
}
