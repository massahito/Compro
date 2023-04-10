
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int N;
	int S;
	int i;
	int M;
	cin >> N >> M;
	i = 0;
	while (i < N)
	{
		cin >> S;

		if(S < M && arr[M - S])
		{
			cout << "Yes" << endl;
			return 0;
		}
		i++;
	}
	cout << "No" << endl;
	return 1;
}