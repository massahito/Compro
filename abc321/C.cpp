#include <iostream>
#include <string>

using namespace std;

int main()
{
	int K, count = 0;
	int	i = 1;

	cin >> K;

	while(1)
	{
		string S = to_string(i);
		bool		isgood = true;
		for (int i = 1; i < S.size(); i++)
		{
			if (S[i] >= S[i - 1])
				isgood = false;
		}
		if (isgood)
		{
			count++;
			if (count == K)
			{
				cout << i << endl;
				return (0);
			}
		}
		i++;
	}

}
