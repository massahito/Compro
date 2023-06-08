#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int main()
{
	int N, count = 0;
	string S;

	cin >> N;
	cin >> S;

	for(int i = 0; i < 1000; i++)
	{
		bool fst = false, scd = false;
		for(int j = 0; j < N; j++)
		{
			if(!fst && S[j] == (i / 100 + '0'))
				fst = true;
			else if (!scd && fst && S[j] == ((i / 10 - (i / 100) * 10) + '0'))
				scd = true;
			else if (scd && S[j] == ((i - (i / 10) * 10 ) + '0'))
			{
				count++;
				break;
			}
		}
	}
			
	cout << count << endl;
}
