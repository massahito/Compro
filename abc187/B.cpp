#include <iostream>

using namespace std;

int main()
{
	int N, count = 0;

	cin >> N;

	double X[N], Y[N];

	for(int i = 0; i < N; i++)
		cin >> X[i] >> Y[i];
	
	for(int i = 0; i < N; i++)
	{
		for(int j = i + 1; j < N; j++)
		{
			double slope = (Y[i] - Y[j]) / (X[i] - X[j]);
			if (-1 <= slope && slope <= 1)
				count++;
		}
	}
	cout << count << endl;
}
