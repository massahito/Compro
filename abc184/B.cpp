#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long  N, X;
	string S;

	cin >> N >> X;
	cin >> S;

	for(int i = 0; i < N; i++)
	{
		if(S[i] == 'o')
			X++;
		else if(X != 0)
			X--;
	}
	cout << X << endl;
}

	
