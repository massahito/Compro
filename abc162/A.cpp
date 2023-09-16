#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	int		T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int			N;
		int			count = 0;
		set<int>	S;

		cin >> N;
		for(int j = 0; j < N; j++)
		{
			int		num;
			bool	isgood = true;

			cin >> num;
			S.insert(num);
			for (int k = 1; k < num; k++)
				if (S.find(k) == S.end())
					isgood = false;
			if (isgood)
				count++;
		}
		cout << count << endl;
	}
}
			
