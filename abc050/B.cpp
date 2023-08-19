#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M, sum = 0;

	cin >> N;
	vector<int> T(N);
	for(int i = 0; i < N; i++)
	{
		cin >> T[i];
		sum += T[i];
	}
	cin >> M;
	for(int i = 0; i < M; i++)
	{
		int P, X;
		
		cin >> P >> X;
		P--;
		cout << sum - T[P] + X << endl;
	}
}

