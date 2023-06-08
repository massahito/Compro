#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<int> s(M, 0), c(M, 0);

	for(int i = 0; i < M; i++)
		cin >> s[i] >> c[i];

	for(int i = 0; i < 1000; i++)
	{
		bool flag = true;
		int	degit = 1;
		int num = 1;
		while(num * 10 <= i)
		{
			degit++;
			num *= 10;
		}
		if(degit != N)
			continue;
		for(int j = 0; j < M; j++)
		{
			if(s[j] == 1 && (c[j]) != i / 100)
				flag = false;
			else if(s[j] == 2 && (c[j]) != (i / 10 - (i / 100) * 10))
				flag = false;
			else if(s[j] == 3 && (c[j]) != (i  - (i / 10) * 10))
				flag = false;
		}

		if(flag == true)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
