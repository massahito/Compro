#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string S[10];
	int A = 100000, B = 0, C = 100000, D = 0;
	int status = 0;
	for(int i = 0; i < 10; i++)
		cin >> S[i];
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < S[i].size(); j++)
		{
			if(S[i][j] == '#')
			{
				A = min(A, i);
				B = max(B, i);
				C = min(C, j);
				D = max(D, j);
			}
		}
	}
	cout << A + 1 << " " << B + 1 << endl;
	cout << C + 1 << " " << D + 1 << endl;
}
