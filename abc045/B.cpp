#include <iostream>
#include <string>

using namespace std;

int main()
{
	string	S[3];
	int		idx[3] = {0};
	int 	key = 0;


	cin >> S[0] >> S[1] >> S[2];

	while(1)
	{
		if(S[key].size() == idx[key])	
		{
			cout << (char) (key + 'A') << endl;
			return 0;
		}
		idx[key]++;
		key = S[key][idx[key] - 1] - 'a';
	}
}

		
