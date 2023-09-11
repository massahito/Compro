#include <iostream>

using namespace std;

int main(void)
{
	int		N;

	cin >> N;

	for(int i = 0; i <= N; i++)
	{
		bool isgood = false;
		for(int j = 1; j < 10; j++)
		{
			if(N % j == 0 && i % (N / j) == 0)
			{
				cout << j;
				isgood = true;
				break;
			}
		}
		if(!isgood)
			cout << '-';
	}
	cout << endl;
}

