#include <iostream>
#include <vector>
#define INF 1<<30
using namespace std;

int main()
{
	int N;
	int  price = INF;

	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		int A, P, X;

		cin >> A >> P >> X;
		if ((X - A) <= 0)
			continue;
		price = min(price, P);
	}
	if(price != INF)
		cout << price << endl;
	else
		cout << -1 << endl;
}

