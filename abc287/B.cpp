#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	int count = 0;

	cin >> N >> M;

	vector<string> S(N), T(M);
	for(int i = 0; i < N; i++)
		cin >> S[i];
	for(int i = 0; i < M; i++)
		cin >> T[i];
	for(int i = 0; i < N; i++)
	{
		bool isgood = false;
		for(int j = 0; j < M; j++)
			if(&(S[i][3]) == T[j])
				isgood = true;
		if (isgood)
			count++;
	}
	cout << count << endl;
}
			
