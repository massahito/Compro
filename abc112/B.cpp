#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, T;

	cin >> N >> T;
	vector<int> V;
	for(int i = 0; i < N; i++)
	{
		int c, t;
		cin >> c >> t;
		if(t <= T)
			V.push_back(c);
	}
	sort(V.begin(), V.end());

	if(V.size() == 0)
		cout << "TLE" << endl;
	else
		cout << V[0] << endl;
}
