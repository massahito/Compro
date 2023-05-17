#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int> A(N);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	
	for(int i = 0; i < N - 1; i++)
	{
		cout << A[i] << ' ';
		if(abs(A[i + 1] - A[i]) != 1)
		{
			if(A[i] < A[i + 1])
				for(int j = A[i] + 1; j < A[i + 1]; j++)
					cout << j << ' ';
			else
				for(int j = A[i] - 1; A[i + 1] < j; j--)
					cout << j << ' ';
		}
	}
	cout << A[N - 1] << endl;
}
