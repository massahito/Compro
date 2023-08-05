#include <iostream>

using namespace std;

int main()
{
	int N, K, M;
	int agg = 0, score;

	cin >> N >> K >> M;

	for(int i = 0; i < N - 1; i++)
	{
		int A;
		cin >> A;
		agg += A;
	}
	score = max(0, M * N - agg);
	if(score <= K)
		cout << score << endl;
	else
		cout << -1 << endl;
}
