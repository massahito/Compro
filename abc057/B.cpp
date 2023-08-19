#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;
	vector<int> sx(N), sy(N), cx(M), cy(M);

	for(int i = 0; i < N; i++)
		cin >> sx[i] >> sy[i];
	for(int i = 0; i < M; i++)
		cin >> cx[i] >> cy[i];
	for(int i = 0; i < N; i++)
	{
		int diff = 1<<30;
		int count = 0;
		for(int j = 0; j < M; j++)
		{
			if(abs(sx[i] - cx[j]) + abs(sy[i] - cy[j]) < diff)
			{
				diff = abs(sx[i] - cx[j]) + abs(sy[i] - cy[j]);
				count = j + 1;
			}
		}
		cout << count << endl;
	}
}
