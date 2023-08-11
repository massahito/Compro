#include <iostream>
<<<<<<< HEAD
#include <cmath>
=======
>>>>>>> b62307ff1278fcf556ebd72aabe82b1076b0c5c1

using namespace std;

int main()
{
	int D, N;
<<<<<<< HEAD
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

=======

	cin >> D >> N;
	if(N == 100)
		N++;
	cout << N;
	for(int i = 0; i < D; i++)
		cout << "00";
	cout << endl;
}
>>>>>>> b62307ff1278fcf556ebd72aabe82b1076b0c5c1
