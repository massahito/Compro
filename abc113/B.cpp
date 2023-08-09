#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int N, T, A, count = 0;
	double diff = 1<<30;

	cin >> N >> T >> A;

	for(int i = 0; i < N; i++)
	{
		int H;
		cin >> H;

		if(abs(A - (T - H * 0.006)) < diff)
		{
			diff = abs(A - (T - H * 0.006));
			count = i;
		}
	}
	cout << count + 1 << endl;
}

