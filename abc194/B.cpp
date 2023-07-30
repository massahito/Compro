#include <iostream>
#include <vector>
#define INF 1<<30

using namespace std;

int main()
{
	int N, count = INF;

	cin >> N;
	vector<int> A(N), B(N);
	for(int i = 0; i < N; i++)
		cin >> A[i] >> B[i];

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(i == j)
				count = min(count, A[i] + B[j]);
			else
				count = min(count, max(A[i], B[j]));
		}
	}
	cout << count << endl;
}
