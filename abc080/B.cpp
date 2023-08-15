#include <iostream>

using namespace std;

int main()
{
	int N, num;
	int sum = 0;

	cin >> N;
	num = N;
	while(N)
	{
		sum += (N % 10);
		N /= 10;
	}
	if(num % sum)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}

