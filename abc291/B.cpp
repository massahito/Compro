#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int N;
	double sum = 0;

	cin >> N;
	vector<int> X(5 * N);
	for(int i = 0; i < 5 * N; i++)
		cin >> X[i];
	sort(X.begin(), X.end());
	for(int i = N; i < 4 * N; i++)
		sum += X[i];
	cout << fixed;
	cout << setprecision(8) << sum / (3 * N) << endl;
}

	
