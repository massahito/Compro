#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long hole[100010][5] = {0};
	int N;

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		int T, X, A;
		cin >> T >> X >> A;
		hole[T][X] += A;
	}
	for(int i = 1; i < N; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(j = 0)
				

