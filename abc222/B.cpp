#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, P, count = 0;

	cin >> N >> P;
	
	for(int  i = 0; i < N; i++)
	{
		int a;

		cin >> a;
		if (a < P)
			count++;
	}
	cout << count << endl;
}
