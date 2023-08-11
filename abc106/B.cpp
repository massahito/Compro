#include <iostream>

using namespace std;

int main()
{
	int N, ans = 0;

	cin >> N;

	for(int i = 1; i <= N; i++)
	{
		int count = 0;
		if(i % 2 == 0)
			continue;
		for(int j = 1; j <= i; j++ )
			if(i % j == 0)
				count++;
		if(count == 8)
			ans++;
	}
	cout << ans << endl;
}
