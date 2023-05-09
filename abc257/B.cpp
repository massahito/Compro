#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, K, Q;
	int k, l;

	cin >> N >> K >> Q;
	vector<int>	vct(K, 0);
	
	for(int i = 0; i < K; i++)
	{
		cin >> k;
		vct[i] = k;
	}

	for(int i = 0; i < Q; i++)
	{
		cin >> l;
		if(vct[l - 1] == N)
			continue;
		else if(l == K || vct[l - 1] + 1 != vct[l])
			vct[l - 1]++;
	}
	for(int i = 0; i < K; i++)
		if(vct[i])
			cout << vct[i] << " ";
	cout << endl;
}
