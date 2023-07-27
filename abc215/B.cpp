#include <iostream>

using namespace std;

int main()
{
	long long  N, num;
	int count = 0;


	cin >> N;
	num = 1;

	while(num * 2 <= N)
	{
		num *= 2;
		count++;
	}
	cout << count << endl;
}


