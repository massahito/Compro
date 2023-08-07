#include <iostream>

using namespace std;

int main()
{
	int N, K;
	int count = 0;

	cin >> N >> K;
	if (N == 0)
		count++;
	while(N)
	{
		N /= K;
		count++;
	}
	cout << count << endl;
}
