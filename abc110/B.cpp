#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, X, Y;

	cin >> N >> M >> X >> Y;
	vector<int> A(N), B(M);

	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < M; i++)
		cin >> B[i];
	for(int i = X + 1; i <= Y; i++)
	{
		bool isgood = true;
		for(int j = 0; j < N; j++)
			if(i <= A[j])
			 isgood = false;
		for(int j = 0; j < M; j++)
			if(B[j] < i)
				isgood = false;
		if(isgood)
		{
			cout << "No War" << endl;
			return (0);
		}
	}
	cout << "War" << endl;
}
		



