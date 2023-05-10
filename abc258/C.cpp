#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N, Q, R;
	string S;

	cin >> N >> Q;
	cin >> S;
	R = N;
	for(int i = 0; i < Q; i++)
	{
		int s, x;
		cin >> s >> x;
		if(s == 1)
		{
			R -= x % N;
			while(R < 0)
				R += N;
		}
		else if(s == 2)
		{
			cout << S[(R + x - 1) % N] << endl;
		}
	}
}
	
