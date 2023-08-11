#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	int ans = 0;

	cin >> N;
	vector<string> A(N);
	for(int i = 0; i < N; i++)
		cin >> A[i];

	cin >> M;
	vector<string> B(M);
	for(int i = 0; i < M; i++)
		cin >> B[i];
	for(int i = 0; i < N; i++)
	{
		int count = 0;
		for(int k = 0; k < N; k++)
			if(A[i] == A[k])
				count++;
		for(int j = 0; j < M; j++)
			if(A[i] == B[j])
				count--;
		ans = max(ans, count);
	}
	cout << ans << endl;
}
