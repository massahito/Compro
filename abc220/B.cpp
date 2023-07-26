#include <iostream>
#include <string>

using namespace std;

int main()
{
	int K;
	long long a = 0, b = 0;
	string A, B;
	

	cin >> K;
	cin >> A >> B;

	for(int i = 0; i < A.size(); i++)
		a = a * K + (A[i] - '0');
	for(int i = 0; i < B.size(); i++)
		b = b * K + (B[i] - '0');
	cout << a * b << endl;
}
