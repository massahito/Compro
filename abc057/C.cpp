#include <iostream>
#include <climits>

using namespace std;

int main()
{
	long long N;
	long long ans = LONG_MAX;

	cin >> N;

	for(long long i = 1; i * i <= N; i++)
		if(N % i == 0)
			ans = min(ans, max(i, N / i));
	int keta = 0;
	while(ans)
	{
		keta++;
		ans /= 10;
	}
	cout << keta << endl;
}

