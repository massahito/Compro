#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	string S;

	cin >> N;
	cin >> S;
	for(int i = 0; i < N; i++)
	{
		if(S[i] == '1')
		{
			if(i % 2)
				cout << "Aoki" << endl;
			else
				cout << "Takahashi" << endl;
			return (0);
		}
	}
	return (0);
}
