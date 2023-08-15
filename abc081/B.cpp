#include <iostream>

using namespace std;

int main()
{
	int N;
	int minimum = 1<<30;

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		int A;
		int count = 0;

		cin >> A;
		while(A % 2 == 0)
		{
			count++;
			A /= 2;
		}
		minimum = min(minimum, count);
	}
	cout << minimum << endl;
}

