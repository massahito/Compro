#include <iostream>

using namespace std;

int main()
{
	int N, X;
	int D = 0, count = 1;

	cin >> N >> X;

	for(int i = 0; i < N; i++)
	{
		int L;

		cin >> L;
		D = D + L;
		if(D <= X)
			count++;
	}
	cout << count << endl;
}

