#include <iostream>
using namespace std;

int main()
{
	int N;
	long long prev1 = 2, prev2 = 1;

	cin >> N;
	if(N == 0)
		cout << prev1 << endl;
	else if(N == 1)
		cout << prev2 << endl;
	else
	{
		for(int i = 2; i <= N; i++)	
		{
			long long tmp = prev2;
			prev2 = prev2 + prev1;
			prev1 = tmp;
		}
		cout << prev2 <<  endl;
	}
}
