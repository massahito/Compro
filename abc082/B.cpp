#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string S, T;

	cin >> S >> T;
	sort(S.begin(), S.end());
	sort(T.rbegin(), T.rend());
	if(S < T)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
		
