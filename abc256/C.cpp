#include <iostream>

using namespace std;

int main()
{
	int H[3], W[3], mp[3][3];
	int count = 0;

	cin >> H[0] >> H[1] >> H[2] >> W[0] >> W[1] >> W[2];

	for(int i = 1; i < W[0]; i++)
	{
		for(int j = 1; j + i < W[0]; j++)
		{
			for(int k = 1; k < W[1]; k++)
			{
				for(int l = 1; l + k < W[1]; l++)
				{
					mp[0][0] = i;
					mp[0][1] = j;
					mp[1][0] = k;
					mp[1][1] = l;
					mp[0][2] = W[0] - (i + j);
					mp[1][2] = W[1] - (k + l);
					mp[2][0] = H[0] - mp[0][0] - mp[1][0];
					mp[2][1] = H[1] - mp[0][1] - mp[1][1];
					mp[2][2] = W[2] - mp[2][0] - mp[2][1];
					if(mp[2][0] <= 0 || mp[2][1] <= 0 || mp[2][2] <= 0)
						continue;
					if(H[2] == mp[0][2] + mp[1][2] + mp[2][2])
						count++;
					}
				}
			}
		}
		cout << count << endl;
}

