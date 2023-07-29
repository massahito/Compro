#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int N;

	cin >> N;
	while(N % 10 == 0 && N != 0)
		N /= 10;
	string S = to_string(N);
	string R = S;
	reverse(R.begin(), R.end());
	if(R == S)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
