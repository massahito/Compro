#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, ans = 0;
	cin >> N;
	vector<int> D(N);

	for(int i = 0; i < N; i++)
		cin >> D[i];
	
	for(int i = 0; i < N; i++)
		for(int j = i + 1; j < N; j++)
			ans += D[i] * D[j];
	cout << ans << endl;
}

	
