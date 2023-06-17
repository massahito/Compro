#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M, K;	
	int ans = 0;

	cin >> N >> M; 
	vector<int> A(M), B(M);
	for(int i = 0; i < M; i++)
		cin >> A[i] >> B[i];
	cin >> K;
	vector<int> C(K), D(K);
	for(int i = 0; i < K; i++)
		cin >> C[i] >> D[i];
	for(int i = 0; i < (1<<K); i++)
	{
		vector<int> Dish(N + 1, 0);
		int	count = 0;
		for(int j = 0; j < K; j++)
		{
			if(i & (1 << j))
				Dish[C[j]]++;
			else
				Dish[D[j]]++;
		}
		for(int j = 0; j < M; j++)
			if(Dish[A[j]] && Dish[B[j]])
				count++;
		ans = max(ans, count);
	}
	cout << ans << endl;
}
