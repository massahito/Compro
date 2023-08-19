#include <iostream>

using namespace std;
int main()
{
	int K, S;
	int count =0;

	cin >> K >> S;

	for(int i = 0; i <= K; i++)
		for(int j = 0; j <= K; j++)
			if(S - i - j <= K && 0 <= S - i - j)
				count++;
	cout << count << endl;
}
