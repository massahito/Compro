#include <iostream>
#include <string>

using namespace std;

int main()
{
	char	A[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	int		B[] = {8, 7, 6, 5, 4, 3, 2, 1};
	for(int i = 0; i < 8; i++)
	{
		string S;
		cin >> S;
		for(int j = 0; j < S.size(); j++)
		{
			if(S[j] == '*')
				cout << A[j] << B[i] << endl;
		}
	}
}
