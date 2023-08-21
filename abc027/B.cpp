#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, sum = 0, count = 0;

	cin >> N;
	vector<int> A(N);
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		sum += A[i];
	}
	if (sum % N)
	{
		cout << -1 << endl;
		return (0);
	}
	int mean = sum / N;
	vector<int> B(N);

	for(int i = 0; i < N; i++)
		B[i] = A[i] - mean;
	sum = 0;
	for(int i = 0; i < N; i++)
	{
		sum += B[i];
		if(sum != 0)
			count++;
	}
	cout << count << endl;
}
	

	
