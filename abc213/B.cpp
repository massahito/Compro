#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, max_num = 0;
	int id = 0, ans = 1<<30;

	cin >> N;
	vector<int> A(N);

	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		max_num = max(max_num, A[i]);
	}
	for(int i = 0; i < N; i++)
	{
		if(A[i] != max_num && max_num - A[i] < ans)
		{
			id = i;
			ans = max_num - A[i];
		}
	}
	
	cout << id + 1 << endl;
}
	
