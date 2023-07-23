#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	string S;

	cin >> N >> S;
	
	for(int i = 1; i < N; i++)
	{
		int count = 0;
		for(int j = 0; j + i < N; j++)
		{
			if(S[j] != S[j + i])
				count++;
			else
				break;
		}
		cout << count << endl;
	}
}
