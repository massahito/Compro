#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;
	string S = to_string(N);
	for (int i = 1; i < S.size(); i++)
	{
		if (S[i] >= S[i - 1])
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}
