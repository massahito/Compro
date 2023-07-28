#include <iostream>

using namespace std;

int main()
{
	long long  N, save, count;

	cin >> N;
	save = 0;
	count = 0;
	while(save < N)
	{
		count++;
		save += count;
	}
	cout << count << endl;
}
