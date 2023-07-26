#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int N;
	
	cin >> N;
	vector<int> L(N);
	vector<vector<int>> A(N);
	set<vector<int>> S;

	for(int i = 0; i < N; i++)
	{
		cin >> L[i];
		for(int j = 0; j < L[i]; j++)
		{
			int a;
			cin >> a;
			A[i].push_back(a);
		}
		S.insert(A[i]);
	}
	cout << S.size() << endl;
}
