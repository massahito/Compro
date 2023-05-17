#include <iostream>

using namespace std;

int main()
{
	int N;
	long long ans = 1;

	cin >> N;
	for(int i = 0; i < N; i++)
		ans *= 2;
	cout << ans << endl;
}
