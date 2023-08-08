#include <iostream>

using namespace std;

int main()
{
	int s, count = 1;
	int arr[1000010] = {0};

	cin >> s;

	while(1)
	{
		if(arr[s])
		{
			cout << count << endl;
			return (0);
		}
		arr[s]++;
		count++;
		if(s % 2)
			s = 3 * s + 1;
		else
			s = s / 2;
	}
}
