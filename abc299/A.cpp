#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N, poal, ball;
	bool status = false;
	string S;

	cin >> N;
	cin >> S;
	poal = 0;
	ball = 0;
	for(int i = 0; i < N; i++)
	{
		if (S[i] == '|')
		{
			if(poal == 1 && ball == 1)
				status = true;
			else
				poal++;
		}
		else if(S[i] == '*' && poal == 1)
			ball++;
	}
	if (status)
		cout << "in" << endl;
	else
		cout << "out" << endl;
	return (0);
}

