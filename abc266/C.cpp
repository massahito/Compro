#include <iostream>

using namespace std;
int main()
{
	int X[4], Y[4];

	for(int i = 0; i < 4; i++)
		cin >> X[i] >> Y[i];

	for(int i = 0; i < 4; i++)
	{
		int flag = 0;
		for(int j = 1; j < 4; j++)
		{
			if(X[i] < X[(i + j) % 4])
				flag += 1000;
			else if(X[(i + j) % 4] < X[i])
				flag += 100;
			if(Y[i] < Y[(i + j) % 4])
				flag += 10;
			else if(Y[(i + j) % 4] < Y[i])
				flag += 1;
		}
		if (1111 < flag)
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}
