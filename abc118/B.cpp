#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	int count = 0;

	cin >> N >> M;
	vector<int> mp(M, 0);

	for(int i = 0; i < N; i++)
	{
		int K;

		cin >> K;
		for(int j = 0; j < K; j++)
		{
			int A;
			cin >> A;
			A--;
			mp[A]++;
		}
	}

	for(int i = 0; i < M; i++)
		if(mp[i] == N)
			count++;
	cout << count << endl;
}
	
