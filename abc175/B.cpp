#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int N;
	int count = 0;

	cin >> N;
	vector<int> V(N);
	for(int i = 0; i < N; i++)
		cin >> V[i];
	sort(V.begin(), V.end());
	for(int i = 0; i < V.size(); i++)
	{
		for(int j = i + 1; j < V.size(); j++)
		{
			for(int k = j + 1; k < V.size(); k++)
			{

				if (V[i] == V[j] || V[i] == V[k] || V[j] == V[k])
					continue;
				if (V[k] < V[i] + V[j])
					count++;
			}
		}
	}
	cout << count << endl;
}
