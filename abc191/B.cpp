#include <iostream>
using namespace std;

int main()
{
	int N, X;

	cin >> N >> X;

	for(int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		if(A != X)
			cout << A << " ";
	}
	cout << endl;
}
