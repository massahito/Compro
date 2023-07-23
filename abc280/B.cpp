#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	int ans = 0;
	cin >> N;
	vector<int> S(N);
	for(int i = 0; i < N; i++)
		cin >> S[i];
	for(int i = 0; i < N; i++)
	{
		cout << S[i] - ans << " ";
		ans += S[i] - ans;
	}
	cout << endl;
}
		
