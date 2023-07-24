#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	int same = 0, diff = 0;

	cin >> N;
	vector<int> A(N), B(N);

	for(int i = 0; i < N; i++)
		cin >> A[i];
	for(int i = 0; i < N; i++)
		cin >> B[i];
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(A[i] == B[j])
			{
				if(i == j)
					same++;
				else
					diff++;
			}
		}
	}
	cout << same << endl;
	cout << diff << endl;
}

	
