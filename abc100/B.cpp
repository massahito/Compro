#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int D, N;
	int count = 0;

	cin >> D >> N;
	for(int i = 1; i < 1000000000; i++)
	{
		if(i % (int)pow(100, D) == 0)
		{
			count++;
			if(count == N)
			{
				cout << i << endl;
				return (0);
			}
		}
	}
}

