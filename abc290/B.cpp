#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N, K;
	int	count = 0;
	string S;
	
	cin >> N >> K;
	cin >> S;

	for(int i = 0; i < N; i++)
	{
		if (S[i] == 'o' && count < K)
		{
			cout << 'o';
			count++;
		}
		else
			cout << 'x';
	}
	cout << endl;
}
