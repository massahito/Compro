#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int N, D;
	int count = 0;

	cin >> N >> D;
	vector<vector<double>> X(N, vector<double> (D));
	for(int i = 0; i < N; i++)
		for(int j = 0; j < D; j++)
			cin >> X[i][j];
	for(int i = 0; i < N; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			double num = 0;
			for(int k = 0; k < D; k++)
				num += pow(X[i][k] - X[j][k], 2);
			if(sqrt(num) - (int)sqrt(num) == 0)
				count++;
		}
	}
	cout << count << endl;
}
