#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<int>	D1(N), D2(N);
	for(int  i = 0; i < N; i++)
		cin >> D1[i] >> D2[i];
		
	for(int  i = 2; i < N; i++)
	{
		if (D1[i] == D2[i] && D1[i - 1] == D2[i - 1] && D1[i - 2] == D2[i - 2])
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
}
	
