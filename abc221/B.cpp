#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S, T;
	int		index = -1;

	cin >> S >> T;

	for(int i = 0; i < S.size(); i++)
	{
		if(S[i] != T[i])	
		{
			string R = S;
			if(0 < i)
			{
				char tmp = R[i];
				R[i] = R[i - 1];
				R[i - 1] = tmp;
				if(R == T)
				{
					cout << "Yes" << endl;
					return (0);
				}
			}
			R = S;
			if(i + 1 < S.size())
			{
				char tmp = R[i];
				R[i] = R[i + 1];
				R[i + 1] = tmp;
				if(R == T)
				{
					cout << "Yes" << endl;
					return (0);
				}
			}
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}

