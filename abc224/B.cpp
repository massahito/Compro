#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int H, W;
	
	cin >> H >> W;
	vector<vector<long long>> A(H, vector<long long> (W));
	for(int i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> A[i][j];
	for(int i = 0; i < H; i++)
	{
		for(int k = i + 1; k < H; k++)
		{
			for(int j = 0; j < W; j++)
			{
				for(int l = j + 1; l < W; l++)
				{
					if(A[k][j] + A[i][l] < A[i][j] + A[k][l])	
					{
						cout << "No" << endl;
						return (0);
					}
				}
			}
		}
	}
	cout << "Yes" << endl;
	return (0);
}

				
