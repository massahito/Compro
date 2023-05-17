#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string S, T;
	int	A[26] = {0}, B[26] = {0};
	int countA = 0, countB = 0;

	cin >> S >> T;
	if(S.size() != T.size())
	{
		cout << "No" << endl;
		return (0);
	}

	for(int i = 0; i < S.size(); i++)
	{
		if(S[i] == '@')
			countA++;
		else
			A[S[i] - 'a']++;
	}

	for(int i = 0; i < T.size(); i++)
	{
		if(T[i] == '@')
			countB++;
		else
			B[T[i] - 'a']++;
	}
	
	for(int i = 0; i < 26; i++)
	{
		if(A[i] < B[i])
		{
			if(i != 0 && i != 2 && i != 3 && i != 4 && i != 14 && i != 19 && i != 17)
			{
				cout << "No" << endl;
				return (0);
			}
			else
				countA -= (B[i] - A[i]);
		}
		else if(B[i] < A[i])
		{
			if(i != 0 && i != 2 && i != 3 && i != 4 && i != 14 && i != 19 && i != 17)
			{
				cout << "No" << endl;
				return (0);
			}
			else
				countB -= (A[i] - B[i]);
		}
	}
	if(countA == countB && 0 <= countA && 0 <= countB)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

