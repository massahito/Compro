#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	long long X, K;

	cin >> X >> K;
	for(int i = 0; i < K; i++)
	{
		int num = (X / (long) pow(10, i)) % 10;
		if(5 <= num)
			X = (X / (long)pow(10, i + 1) + 1) * pow(10, i + 1);
		else
			X = (X / (long) pow(10, i + 1)) * pow(10, i + 1);
	}
	cout << X << endl;
}
			
