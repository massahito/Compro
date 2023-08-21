#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, T;
	int time = 0;

	cin >> N >> T;
	vector<int> A(N);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 1; i < N; i++)
	{
		if(A[i] - A[i - 1] < T)
			time += (A[i] - A[i - 1]);
		else
			time += T;
	}
	cout << time + T << endl;
}
			
