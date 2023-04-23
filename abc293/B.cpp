#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
int main()
{
	int K, x, ans;
	set<int> X, Y;

	cin >> K;
	for(int i = 1; i <= K; i++)
	{
		cin >> x;
		if(X.find(i) == X.end())
			X.insert(x);
	}
	//sort(X.begin(), X.end());
	cout << K - X.size() << endl;
	for(int i = 1; i <= K; i++)
		if(X.find(i) == X.end())
			cout << i << ' ';
	cout << endl;
}
