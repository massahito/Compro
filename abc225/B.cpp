#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<vector<int>> T(N);

	for(int i = 0; i < N - 1; i++)
	{
		int a, b;

		cin >> a >> b;
		a--;
		b--;
		T[a].push_back(b);
		T[b].push_back(a);
	}
	for(int i = 0; i < N; i++)
	{
		if(T[i].size() == N - 1)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}

