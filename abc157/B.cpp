#include <iostream>

using namespace std;
int main()
{
	int A[3][3];
	int N;

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			cin >> A[i][j];

	cin >> N;
	for(int k = 0; k < N; k++)
	{
		int b;

		cin >> b;
		for(int i = 0; i < 3; i++)
			for(int j = 0; j < 3; j++)
				if (b == A[i][j])
					A[i][j] = 0;
	}
	//check
	for(int i = 0; i < 3; i++)
	{
		bool isgood = true;
		for(int j = 0; j < 3; j++)
			if (A[i][j] != 0)
				isgood = false;
		if(isgood)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	for(int j = 0; j < 3; j++)
	{
		bool isgood = true;
		for(int i = 0; i < 3; i++)
			if (A[i][j] != 0)
				isgood = false;
		if(isgood)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	bool isgood = true;
	for(int i = 0; i < 3; i++)	
	{
		if(A[i][i] != 0)
			isgood =false;
	}
	if(isgood)
	{
		cout << "Yes" << endl;
		return (0);
	}
	isgood = true;
	for(int i = 0; i < 3; i++)	
	{
		if(A[i][2 - i] != 0)
			isgood =false;
	}
	if(isgood)
	{
		cout << "Yes" << endl;
		return (0);
	}
	cout << "No" << endl;
	return (0);
}

	
