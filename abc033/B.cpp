#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;


	cin >> N;

	double arr[N];
	double sum = 0;
	string str[N];
	for(int i = 0; i < N; i++)
	{
		cin >> str[i] >> arr[i];
		sum += arr[i];
	}
	for(int i = 0; i < N; i++)
	{
		if(0.5 < arr[i] / sum)
		{
			cout << str[i] << endl;
			return (0);
		}
	}
	cout << "atcoder" << endl;
}

