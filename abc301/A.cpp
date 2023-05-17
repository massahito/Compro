#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N, T, A, W;
	string S;
	
	cin >> N;
	cin >> S;
	T = 0;
	A = 0;
	for(int i = 0; i < N; i++)
	{
		if(S[i] == 'T')
			T++;
		else
			A++;
		if(T < A)
			W = 1;
		else if(A < T)
			W = 0;
	}
	if(W)
		cout << 'A' << endl;
	else
		cout << 'T' << endl;
	return (0);
}
