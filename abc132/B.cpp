#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

int main()
{
	int N, count = 0;

	cin >> N;
	vector<int> P(N);
	for(int i = 0; i < N; i++)
		cin >> P[i];
	for(int i = 0; i < N - 2; i++)
	{
		int mi = min({ P[i], P[i + 1], P[i + 2] });
		int ma = max({ P[i], P[i + 1], P[i + 2] });
		if(mi != P[i + 1] && ma != P[i + 1])
			count++;
	}
	cout << count << endl;
}
