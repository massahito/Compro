#include <iostream>

using namespace std;

int main()
{
	int N, count = 0, hight = 0;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		int H;
		cin >> H;
		if(hight <= H)
		{
			count++;
			hight = H;
		}
	}
	cout << count << endl;
}
	
