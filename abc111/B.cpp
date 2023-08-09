#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;

	cin >> N;
	for(int i = N; i < 1000; i++)
	{
		string S = to_string(i);

		if(S[0] == S[1] && S[1] == S[2] && S[0] == S[2])
		{
			cout << i << endl;
			return (0);
		}
	}
}
