#include <iostream>

using namespace std;

int main()
{
	long long N, M, count = 0;

	cin >> N >> M;
	for(int i = 0; i < M; i++)
	{
		long long A;
		cin >> A;
		count += A;
	}
	if(count <= N)
		cout << N - count << endl;
	else
		cout << -1 << endl;
}
