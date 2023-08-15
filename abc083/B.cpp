#include <iostream>


using namespace std;

int main()
{
	int N, A, B;
	int ans = 0;

	cin >> N >> A >> B;

	for(int i = 0; i <= N; i++)
	{
		int num = i;
		int count = 0;

		while(num)
		{
			count += (num % 10);
			num /= 10;
		}
		if(A <= count && count <= B)
			ans += i;
	}
	cout << ans << endl;
}
