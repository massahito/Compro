#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M, sum = 0, count = 0;

	cin >> N >> M;
	vector<int> A(N);
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		sum += A[i];
	}
	for(int i = 0; i < N; i++)
		if(sum <= A[i] * 4 * M)
			count++;
	if(M <= count)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
	
