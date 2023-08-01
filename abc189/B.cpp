#include <iostream>

using namespace std;

int main()
{
	int N, X, count = -1;
	int summarize = 0;

	cin >> N >> X;

	for(int i = 0; i < N; i++)
	{
		int V, P;
		
		cin >> V >> P;
		summarize += (V * P);
		if (X * 100 < summarize && count == -1)
			count = i + 1;
	}
	cout << count << endl;
}
	
			
