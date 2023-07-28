#include <iostream>

using namespace std;
int main()
{
	long long num = 1;
	long long P;
	int coin = 0;

	cin >> P;
	for(int i = 1; i <= 10; i++)
		num *= i;
	for(int i = 10; 0 < i; i--)
	{
		if (num <= P)
		{
			coin += (P / num);	
			P = P - (P / num) * num;
		}
		num /= i;
	}
	cout << coin << endl;
	return (0);
}
		
