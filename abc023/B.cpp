#include <iostream>
#include <string>

using namespace std;

int main()
{
	int		N;
	string	S, T;

	cin >> N >> S;

	T = string("b");
	for(int i = 0; i <= N; i++)
	{
		if(S == T)	
		{
			cout << i << endl;
			return (0);
		}
		if((i + 1) % 3 == 1)
			T = "a" + T + "c";
		else if((i + 1) % 3 == 2)
			T = "c" + T + "a";
		else if((i + 1) % 3 == 0)
			T = "b" + T + "b";
	}
	cout << -1 << endl;
}
