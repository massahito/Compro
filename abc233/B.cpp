#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	int L, R;
	string S;

	cin >> L >> R;
	cin >> S;
	L--;
	R--;
	for(int i = 0; i < S.size(); i++)
	{
		if(i == L)
		{
			for(int j = R; L <= j; j--)
				cout << S[j];
			i = R;
		}
		else
			cout << S[i];
	}
	cout << endl;
}
		
		
