#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<string>	S(N);
	for(int i = 0; i < N; i++)
		cin >> S[i];
	do
	{
		bool isgood = true;
		string prev = S[0];
		for(int i = 1; i < N; i++)	
		{
			int diff  = 0;
			for(int j = 0; j < M; j++)
			{
				if(prev[j] != S[i][j])
					diff++;
			}
			if (diff != 1)
				isgood = false;
			prev = S[i];
		}
		if(isgood)
		{
			cout << "Yes" << endl;
			return 0;
		}	
	} while(next_permutation(S.begin(), S.end()));

	cout << "No" << endl;
}

