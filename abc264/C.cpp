#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int H1, H2, W1, W2;
	int arr1[10][10] = {0}, arr2[10][10] = {0};

	cin >> H1 >> W1;

	for(int i = 0; i < H1; i++)
		for(int j = 0; j < W1; j++)
			cin >> arr1[i][j];
	cin >> H2 >> W2;
	for(int i = 0; i < H2; i++)
		for(int j = 0; j < W2; j++)
			cin >> arr2[i][j];
	for(int i = 0; i < (1 << H1); i++)
	{
		for(int j = 0; j < (1 << W1); j++)
		{
			vector<int> hvec, wvec;
			for(int k = 0; k < H1; k++)
				if((i & (1 << k)) == 0)
					hvec.push_back(k);
			for(int k = 0; k < W1; k++)
				if((j & (1 << k)) == 0)
					wvec.push_back(k);
			if(hvec.size() != H2 || wvec.size() != W2)
				continue;
			bool match = true;

			for(int k = 0; k < H2; k++)
			{
				for(int l = 0; l < W2; l++)
				{
					if(arr1[hvec[k]][wvec[l]] != arr2[k][l])
					{
						match = false;
						break;
					}
				}
			}
			if(match)
			{
				cout << "Yes" << endl;
				return (0);
			
			}
		}
	}
	cout << "No" << endl;
}



