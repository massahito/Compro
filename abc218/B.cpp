#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> P(26);

	for(int i = 0; i < 26; i++)
	{
		int a;
		cin >> a;
		
		cout << char('a' + (a - 1));
	}
	cout << endl;
}
