#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> M(5), O(5);
	int ans = 1<<30;

	for(int i = 0; i < 5; i++)
		cin >> M[i];
	for(int i = 0; i < 5; i++)
		O[i] = i;
	do
	{
		int minutes = 0;
		for(int i = 0; i < 5; i++)
		{
			if(0 < minutes % 10)
				minutes += (10 - minutes % 10);
			minutes += M[O[i]];
		}
		ans = min(ans, minutes);
	}while(next_permutation(O.begin(), O.end()));

	cout << ans << endl;
}
