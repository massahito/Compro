#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int N;

	cin >> N;

	vector<string> s(N), t(N);
	for(int i = 0; i < N; i++)
		cin >> s[i] >> t[i];
	for(int i = 0; i < N; i++)
	{
		bool first = true;
		bool second = true;
		for(int j = 0; j < N; j++)
		{
			if(i == j)
				continue;
			if(s[i] == s[j] || s[i] == t[j])
				first = false;
			if (t[i] == t[j] || t[i] == s[j])
				second = false;
		}
		if(!first && !second)
		{
			cout << "No" << endl;
			return (0);
		}
	}
	cout << "Yes" << endl;
}
