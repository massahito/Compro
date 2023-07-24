#include <iostream>
#include <set>

using namespace std;

int main()
{
	int N;
	set<int> S;
	
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		S.insert(a);
	}
	cout << S.size() << endl;
}
