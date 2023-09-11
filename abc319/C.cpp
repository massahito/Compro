#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int arr[3][3];
	vector<int> P(9);
	double sum = 0, count = 0;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
			P[i * 3 + j] = i * 3 + j;
		}
	}
	do
	{
		if(arr[P[0] / 3][P[0] % 3] == arr[P[1] / 3][P[1] % 3] && arr[P[0] / 3][P[0] % 3] != arr[P[8] / 3][P[8] % 3])	
		{
			cout << P[0] << " " << P[1]  << " " << P[8] << endl;
			count++;
		}
		sum++;
	}while(next_permutation(P.begin(), P.end()));
	cout << count << " " << sum << endl;
	printf("%10.10f\n", 1 -  count / sum);
}
