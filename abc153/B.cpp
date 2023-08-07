#include <iostream>

using namespace std;

int main()
{
	int H, N;
	long long sum = 0;
	bool isgood = true;

	cin >> H >> N;

	for(int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		sum += A;
	}
	if((long long)H <= sum)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
		
