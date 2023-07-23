#include <iostream>
#include <string>

using namespace std;
int main()
{
	int N;
	string S;

	cin >> N >> S;

	for(int i = 0; i < N; i++)
	{
		if(i <= N - 2 && S[i] == 'n' && S[i + 1] == 'a')
		{
			cout << "nya";
			i++;
		}
		else
			cout << S[i];
	}
	cout << endl;
}
