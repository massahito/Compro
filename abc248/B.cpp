#include <iostream>

using namespace std;

int main()
{
	long long A, B, K;
	int count = 0;

	cin >> A >> B >> K;

	while(A < B)
	{
		count++;
		A *= K;
	}
	cout << count << endl;
}
