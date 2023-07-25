#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int> H(N);
	for(int i = 0; i < N; i++)
		cin >> H[i];
	for(int i = 0; i < N; i++)
	{
		if (i + 1 == N || H[i + 1] <= H[i])
		{
			cout << H[i] << endl;
			return (0);
		}
	}
}



