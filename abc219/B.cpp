#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S1, S2, S3, T;

	cin >> S1 >> S2 >> S3 >> T;

	for(int i = 0; i < T.size(); i++)
	{
		if(T[i] == '1')
			cout << S1;
		if(T[i] == '2')
			cout << S2;
		if(T[i] == '3')
			cout << S3;
	}
	cout << endl;
}
