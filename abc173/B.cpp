#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N, arr[4] = {0};

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		string S;

		cin >> S;
		if(S == "AC")
			arr[0]++;
		if(S == "WA")
			arr[1]++;
		if(S == "TLE")
			arr[2]++;
		if(S == "RE")
			arr[3]++;
	}
	cout << "AC x " << arr[0] << endl;
	cout << "WA x " << arr[1] << endl;
	cout << "TLE x " << arr[2] << endl;
	cout << "RE x " << arr[3] << endl;
}
