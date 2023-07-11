#include <iostream>

using namespace std;

int main()
{
	int N, Y;
	int price;

	cin >> N >> Y;

	for(int i = 0; i <= N; i++)
	{
		for(int j = 0; i + j <= N; j++)
		{
			if (i * 10000 + j * 5000 + (N - i - j) * 1000 == Y)
			{
				cout << i << " " << j << " " << N - i - j << endl;
				return 0;
			}
		}
	}
	cout << -1 << " " << -1 << " " << -1 << endl;
}
