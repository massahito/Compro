#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int		N;
	int		count = 0;
	int 	last = 0;
	string	S;

	cin >> N;
	cin >> S;
			
	for(int i = 0; i < N; i++)
		if (S[i] == ')')
			last++;
	for(int i = 0; i < N; i++)
	{
		if(S[i] == '(')
			count++;
		else if (S[i] == ')')
		{
			count--;
			last--;
		}
		if(count <= 0 || last == 0)
			cout << S[i];
	}
	cout << endl;
}



