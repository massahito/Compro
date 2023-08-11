#include <iostream>
#include <string>

using namespace std;

int main()
{
	int A, B;
	int count = 0;

	cin >> A >> B;

	for(int i = A; i <= B; i++)
	{
		string S = to_string(i);
		bool	isgood = true;
		for(int j = 0; j < S.size() / 2; j++)
			if(S[j] != S[S.size() - 1 - j])
				isgood = false;
		if(isgood)
			count++;
	}
	cout << count << endl;
}
