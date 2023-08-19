#include <iostream>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;
	long long count = K;
	for(int i = 1; i < N; i++)
		count *= (K - 1);
	cout << count << endl;
}


