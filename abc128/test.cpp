#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	
	int	N = 50;
	vector<int> V(N);
	for(int i = 0; i < N; i++)
		V[i] = i;
	sort(V.begin(), V.end(), [](int a, int b) {return (a > b);});
	for(int i = 0; i < N; i++)
		cout << V[i] << " ";
	cout << endl;
}
	
