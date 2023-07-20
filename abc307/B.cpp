#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	
	cin >> N;
	vector<string> S(N);
	for(int i = 0; i < N; i++)
		cin >> S[i];

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(i == j)
				continue;
			string str = S[i] + S[j];
			string rev = str;
			reverse(rev.begin(), rev.end());
			if(str == rev)
			{
				cout << "Yes" << endl;
				return (0);
			}
		}
	}
	cout << "No" << endl;
}
