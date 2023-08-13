#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, D, X;
	int sum = 0;

	cin >> N >> D >> X;
	vector<int> A(N, 0);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < N; i++)
	{
		int count = 0;
		int day = 1;

		while(day <= D)
		{
			count++;
			day += A[i];
		}
		sum += count;
	}
	cout << sum + X << endl;
}
