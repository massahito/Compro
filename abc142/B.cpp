#include <iostream>

using namespace std;

int main()
{
	int N, K, count = 0;

	cin >> N >> K;

	for(int i = 0; i < N; i++)
	{
		int h;

		cin >> h;
		if(K <= h)
			count++;
	}
	cout << count << endl;
}
