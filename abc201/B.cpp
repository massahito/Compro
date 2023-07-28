#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<pair<int, string>> P(N);
	for(int i = 0; i < N; i++)
	{
		string S;
		int T;

		cin >> S >> T;
		P[i] = make_pair(T, S);
	}
	sort(P.begin(), P.end());
	cout << P[N - 2].second << endl;
}
		
