#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int H, W;
	cin >> H >> W;
	vector A(H, vector<int>(W));

	for(auto &s: A)
		for(auto &a: s)
			cin >> a;

	for(auto &s: A)
	{
		for(auto a : s)
		{
			if(a == 0)
				cout << '.';
			else
				cout << (char)('A' + a - 1);
		}
		cout << endl;
	}
}
