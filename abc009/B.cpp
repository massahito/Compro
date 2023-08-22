#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int			N;
	int			arr[1010] = {0};
	vector<int>	A;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		int a;

		cin >> a;
		if(arr[a] == 0)
		{
			A.push_back(a);
			arr[a]++;
		}
	}
	sort(A.begin(), A.end());
	if(2 <= A.size())
		cout << A[A.size() - 2] << endl;
	else
		cout << A[0] << endl;
}
