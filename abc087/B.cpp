#include <iostream>
using namespace std;

int main()
{
	int A, B, C, X;
	int count = 0;

	cin >> A >> B >> C >> X;

	for(int i = 0; i <= A; i++)
		for(int j = 0; j <= B; j++)
			for(int k = 0; k <= C; k++)
				if(i * 500 + j * 100 + 50 * k == X)
					count++;
	cout << count << endl;
}
