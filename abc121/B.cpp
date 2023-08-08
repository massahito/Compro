#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M, C, count = 0;

	cin >> N >> M >> C;
	vector<int> B(M);

	for(int i = 0; i < M; i++)
		cin >> B[i];
	for(int i = 0; i < N; i++)
	{
		int sum = 0;
		for(int j = 0; j < M; j++)
		{
			int A;
			cin >> A;
			sum += A * B[j];
		}
		if(0 < sum + C)
			count++;
	}
	cout << count << endl;
}

