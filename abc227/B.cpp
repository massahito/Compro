#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int N, count = 0;

	cin >> N;
	vector<int> S(N);
	for(int i = 0; i < N; i++)
		cin >> S[i];
	
	for(int i = 0; i < N; i++)
	{
		bool isgood = false;
		for(int j = 1; j < 1000; j++)
			for(int k = 1; k < 1000; k++)
				if(S[i] == (3 * j + 3 * k + 4 * j * k))
					isgood = true;
		if(!isgood)
			count++;
	}
	cout << count << endl;
}
