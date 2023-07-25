#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int> A(N);
	for(int i = 0; i < 4 * N - 1; i++)
	{
		int a;
		cin >> a;
		a--;
		A[a]++;
	}
	for(int i = 0; i < N; i++)
	{
		if(A[i] != 4)
		{
			cout << i + 1 << endl;
			return (0);
		}
	}
}
	
	
