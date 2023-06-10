#include <iostream>
#include <string>
#include <vector>

using namespace std;
void func(vector<int> &A, int n, int N);
int main()
{
	int N;

	cin >> N;

	vector<int> A(N, 0);
	func(A, 0, N);

}

void func(vector<int> &A, int n, int N)
{
	if(n == N)
	{
		for(int i = 0; i < N; i++)
			cout << (char)('a' + A[i]);
		cout << endl;
		return ;
	}

	for(int i = 0; i < N; i++)
	{
		A[n] = i;
		func(A, n + 1, N);
	}
}
