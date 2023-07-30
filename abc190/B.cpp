#include <iostream>

using namespace std;

int main()
{
	bool isattack = false;
	int N, S, D;

	cin >> N >> S >> D;
	for(int i = 0; i < N; i++)
	{
		int X, Y;

		cin >> X >> Y;
		if(X < S && D < Y)
			isattack = true;
	}
	if(isattack)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
