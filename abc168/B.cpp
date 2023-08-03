#include <iostream>
#include <string>

using namespace std;

int main()
{
	int		K;
	string	S;

	cin >> K;
	cin >> S;

	for(int i = 0; i < S.size(); i++)
	{
		if(K - 1 < i)
		{
			cout << "...";
			break;
		}
		else
			cout << S[i];
	}
	cout << endl;
}
