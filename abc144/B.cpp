#include <iostream>

using namespace std;
int main()
{
	int N;
	bool isgood = false;

	cin >> N;
	for(int i = 1; i < 10; i++)
		for(int j = 1; j < 10; j++)
			if(i * j == N)
				isgood = true;
	if(isgood)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
