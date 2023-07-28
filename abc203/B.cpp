#include <iostream>

using namespace std;

int main()
{
	int N, K, count = 0;

	cin >> N >> K;
	for(int i = 1; i <= N; i++)
		for(int j = 1; j <= K; j++)
			count += (i * 100 + j);
	cout << count << endl;
}

