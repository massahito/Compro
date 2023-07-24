#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	int x = 0, y = 0;
	int dirx = 1, diry = 0;
	string T;

	cin >> N >> T;
	for(int i = 0; i < N; i++)
	{
		if(T[i] == 'S')
		{
			x += dirx;
			y += diry;
		}
		else
		{
			if (dirx == 1)
			{
				dirx = 0;
				diry = -1;
			}
			else if(dirx == -1)
			{
				dirx = 0;
				diry = 1;
			}
			else if(diry == 1)
			{
				diry = 0;
				dirx = 1;
			}
			else if(diry == -1)
			{
				diry = 0;
				dirx = -1;
			}
		}
	}

	cout << x << " " << y <<  endl;
}
	
