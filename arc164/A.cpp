#include <iostream>

using namespace std;

int main(void)
{
	int		N;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		long long T, K;
		long long ans = 0;

		cin >> T >> K;
		while(T)
		{
			ans += (T % 3);
			T /= 3;
		}
		if (ans <= K)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
