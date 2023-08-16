#include <iostream>
using namespace std;
int main()
{
	int N;
	int sum = 0;

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		int l, r;

		cin >> l >> r;
		sum += ((r - l) + 1);
	}
	cout << sum << endl;
}
