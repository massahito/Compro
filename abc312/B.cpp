#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;
	vector<vector<char>> T(N, vector<char> (M));

	//input
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			cin >> T[i][j];
	
	//calc
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			bool isgood = true;
			
			for(int k = i; k < i + 3; k++)
				for(int l = j; l < j + 3; l++)
					if (N <= k || M <= l || T[k][l] != '#')
						isgood = false;
			for(int k = i + 6; k < i + 9; k++)
				for(int l = j + 6; l < j + 9; l++)
					if (N <= k || M <= l || T[k][l] != '#')
						isgood = false;
			for(int k = i; k < i + 4; k++)
				if (N <= k || M <= j + 4 || T[k][j + 3] != '.')
					isgood = false;
			for(int l = j; l < j + 4; l++)
				if (N <= i + 4 || M <= l || T[i + 3][l] != '.')
					isgood = false;
			for(int k = i + 5; k < i + 9; k++)
				if (N <= k || M <= j + 5 || T[k][j + 5] != '.')
					isgood = false;
			for(int l = j + 5; l < j + 9; l++)
				if (N <= i + 5 || M <= l || T[i + 5][l] != '.')
					isgood = false;
			if(isgood)
				cout << i + 1 << " " << j + 1 << endl;
		}
	}
}
			

						
				
	
