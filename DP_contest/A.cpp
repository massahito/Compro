#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, num;
	vector<int> H, A;

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> num;
		H.push_back(num);
	}
	A.push_back(0);
	A.push_back(abs(H[0] - H[1]));
	for(int i = 2; i < N; i++)
	{
		num = min(A[i - 2] + abs(H[i - 2] - H[i]), A[i - 1] + abs(H[i - 1] - H[i]));
		A.push_back(num);
	}
	cout << A[N - 1] << endl;
}

