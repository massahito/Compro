#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, sum = 0;
	int diff = 1<<30, added = 0;

	cin >> N;
	vector<int> W(N);

	for(int i = 0; i < N; i++)
	{
		cin >> W[i];
		sum += W[i];
	}

	for(int i = 0; i <= N; i++)
	{
		added += W[i];
		diff = min(diff, abs(sum - added - added));
	}
	cout << diff << endl;
}
