#include <iostream>
using namespace std;

int main()
{
	int i, N, Q;
	int c, x;
	int player[100] = {};

	cin >> N >> Q;
	i = 0;
	while (i < Q)
	{
		cin >> c >> x;
		if(c == 1)
			player[x] += 1;
		else if(c == 2)
			player[x] += 2;
		else
		{
			if (player[x] >= 2)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		i++;
	}
	
}