#include <iostream>

using namespace std;

int main()
{
	int N;
	bool isgood = false;

	cin >> N;
	for(int i = 0; i < 26; i++)
		for(int j = 0; j < 14; j++)
			if(i * 4 + j * 7 == N)
				isgood = true;
	if(isgood)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
