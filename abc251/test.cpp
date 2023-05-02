#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> S;

	S.insert(2);
	S.insert(2);
	S.insert(3);
	S.insert(2);
	S.insert(2);
	cout << S.size() << endl;
}

