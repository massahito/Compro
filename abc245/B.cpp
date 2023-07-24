#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<bool> A(2010, true);

	for(int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		A[a] = false;
	}
	for(int i = 0; i <= 2000; i++)
	{
		if(A[i])
		{
			cout << i << endl;
			return (0);
		}
	}
}
