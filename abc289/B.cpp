#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> L(M);
	for(int i = 0; i < M; i++)
	{
		cin >> L[i];
		L[i]--;
	}
	int j = 0;
	for(int i = 0; i < N; i++)
	{
		int k = i;
		while(j < L.size() && k == L[j])
		{
			k++;
			j++;
		}
		int diff = k - i;
		while(i < k)
		{
			cout << k + 1 << " ";
			k--;
		}
		cout << i + 1 << " ";
		i += diff;
	}
	cout << endl;
}
		
	
