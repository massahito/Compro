#include <iostream>

using namespace std;

int main()
{
	long long  N, num;

	cin >> N;
	num = 0;

	while(num * num <= N)
		num++;
	num--;
	cout << num * num << endl;
}



