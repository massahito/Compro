#include <iostream>
using namespace std;

int main()
{
	int N;
	bool isgood = true;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		if(A % 2 == 0 && A % 3 && A % 5)
			isgood = false;
	}
	if(isgood)
		cout << "APPROVED" << endl;
	else
		cout << "DENIED" << endl;
}

			
	
