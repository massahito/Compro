#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, X;
	int sum = 0;

	cin >> N >> X;
	vector<int> m(N);

	for(int i = 0; i < N; i++)
	{
		cin >> m[i];
		sum += m[i];
	}
	sort(m.begin(), m.end());
	cout << N + (X - sum) / m[0] << endl;
}
