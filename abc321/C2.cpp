#include <iostream>
#include <string>

using namespace std;
int main()
{
	long long 	K;
	long long	idx;
	string		S;
	cin >> K;
	S = "0";
	idx = 0;
	for (long long i = 0; i < K; i++)
	{
		if (S[idx] == '9')
		{
			for(long long j = 0; j < S.size(); j++)
				S[j] = '0';
			S = S + "1";
		}
	}
