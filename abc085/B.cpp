#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N;
	int maximum = -1;
	int count = 0;

	cin >> N;
	vector<int> D(N);
	for(int i = 0; i < N; i++)
		cin >> D[i];
	sort(D.begin(), D.end());
	for(int i = 0; i < N; i++)
	{
		if(maximum < D[i])
		{
			count++;
			maximum = D[i];
		}
	}
	cout << count << endl;
}
