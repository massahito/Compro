#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	int sum = 0;

	cin >> N >> K;
	for(int i = 0; i < N; i++)
	{
		int X;
		cin >> X;
		sum += min(2 * X, 2 * abs(K - X));
	}
	cout << sum << endl;
}
	


