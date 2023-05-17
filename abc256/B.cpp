#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, count;
	
	count = 0;
	cin >> N;
	vector<int>	A(N);
	for(int i = 0 ; i < N; i++)
		cin >> A[i];
	for(int i = N - 1; 0 <= i; i--)
	{
		int num = A[i];
		for(int j = 0; j < i; j++)
			A[j] += num;
	}
	for(int i = 0; i < N; i++)
		if(3 < A[i])
			count++;

	cout << count << endl;
}
