#include <iostream>

using namespace std;
int main()
{
	int A, B, K;
	int count = 0;

	cin >> A >> B >> K;

	for(int i = min(A, B); 0 < i; i--)
	{
		if(A % i == 0 && B % i == 0)
		{
			count++;
			if(count == K)
			{
				cout << i << endl;
				return 0;
			}
		}
	}
}
