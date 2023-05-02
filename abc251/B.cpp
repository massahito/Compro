#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	long N, W, count;
	set<long> S;
	cin >> N >> W;

	vector<int> vct(N);
	for(int i = 0; i < N; i++)
			cin >> vct[i];
	count = 0;

	for(int i = 0; i < N; i++)
		if(vct[i] <= W)
			S.insert(vct[i]);

	for(int i = 0; i < N; i++)
		for(int j = i + 1; j <= N; j++)
			if(vct[i] + vct[j] <= W)
				S.insert(vct[i] + vct[j]);

	for(int i = 0; i < N; i++)
		for(int j = i + 1; j < N; j++)
			for(int k = j + 1; k < N; k++)
				if(vct[i] + vct[j] + vct[k] <= W)
					S.insert(vct[i] + vct[j] + vct[k]);
	cout << S.size() << endl;
}

