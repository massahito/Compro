#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main()
{
	int N, K, num;
	vector<long> H, A;

	cin >> N >> K;
	for(int i = 0; i < N; i++)
	{
		cin >> num;
		H.push_back(num);
		A.push_back(LONG_MAX);
	}
	A[0] = 0;
	for(int i = 0; i < N; i++)
	{
		for(int j = 1; j <=K; j++)
		{
			if(i < j)
				break;
			A[i] = min(A[i], A[i - j] + abs(H[i - j] - H[i]));
		}
	}
	cout << A[N - 1] << endl;
}
