#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, K;
	int ans = 0;

	cin >> N >> K;
	vector<int> P(N);

	for(int i = 0; i < N; i++)
		cin >> P[i];
	sort(P.begin(), P.end());
	for(int i = 0; i < K; i++)
		ans += P[i];
	cout << ans << endl;
}
		
