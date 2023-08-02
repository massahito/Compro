#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, m = 0, ans = 0;

	cin >> N;
	vector<int> A(N, 0);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 2; i <= 1000; i++)
	{
		int count = 0;
		for(int j = 0; j < N; j++)
			if (A[j] % i == 0)	
				count++;
		if(m <= count)
		{
			m = count;
			ans = i;
		}
	}
	cout << ans << endl;
}
