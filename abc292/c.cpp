#include <iostream>
using namespace std;

long sumof(int num)
{
	long	count;
	count = 0;
	for (int i = 1; i*i <= num; i++)
	{
		if(num % i == 0)
		{
			count++;
			if(i*i != num)
				count++;
		}
	}
	return (count);
}
int main()
{
	int N;
	long memo[200010]={};
	long ans;
	cin >> N;
	ans = 0;
	for (int i = 1; i < N; i++)
	{
		if(!memo[i])
			memo[i] = sumof(i);
		if(!memo[N - i])
			memo[N - i] = sumof(N - i);
		ans = ans + memo[i] * memo[N - i];		
	
	}
	cout << ans << endl;
}
