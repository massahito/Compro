#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	int mx, count;
	
	cin >> N;

	vector<int> P(N - 1, 0);
	for(int i = 0; i < N - 1; i++)
		cin >> P[i];

	mx = N - 2;
	count = 0;
	while(1)
	{
		count++;
		if(P[mx] == 1)
			break;
		mx = P[mx] - 2;
	}
	cout << count << endl;
}
