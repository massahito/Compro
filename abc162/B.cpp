#include <iostream>

using namespace std;

int main()
{
	int N;
	long long count = 0;

	cin >> N;

	for(int i = 1; i <= N; i++)
		if(i % 3 && i % 5)
			count += i;
	cout << count << endl;
}
