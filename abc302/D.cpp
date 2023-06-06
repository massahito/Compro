#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	long long D;
	
	cin >> N >> M >> D;

	vector<long long> A(N), B(N);
	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < M; i++)
		cin >> B[i];
	sort(A.rbegin(), A.rend());
	sort(B.rbegin(), B.rend());
	
	auto a = A.begin();
	auto b = B.begin();
	while(a != A.end() && b != B.end())
	{
		if(abs(*a - *b) > D)
		{
			if(*a > *b)
				a++;
			else
				b++;
		}
		else
		{
			cout << *a + *b << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
