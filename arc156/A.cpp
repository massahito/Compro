#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int		T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int		N, count = 0;
		bool	isrow = false;
		string	S;

		cin >> N;
		cin >> S;
		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == '1')
			{
				count++;
				if (0 < i && S[i - 1] == '1')
					isrow = true;
			}
		}
		if (count % 2)
			cout << -1 << endl;
		else
		{

			if (count != 2 || !isrow)
				cout << count / 2 << endl;
			else if (N == 3)
				cout << -1 << endl;
			else if (N == 4 && S == "0110")
				cout << 3 << endl;
			else
				cout << 2 << endl;
		}

	}
}
