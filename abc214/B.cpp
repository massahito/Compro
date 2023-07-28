#include <iostream>

using namespace std;

int main()
{
	int S, T, count = 0;

	cin >> S >> T;

	for(int i = 0; i <= 100; i++)
		for(int j = 0; j <= 100; j++)
			for(int k = 0; k <= 100; k++)
				if(i + j + k <= S && i * j * k <= T)
					count++;
	cout << count << endl;
}
