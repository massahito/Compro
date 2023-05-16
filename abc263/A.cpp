#include <iostream>

using namespace std;

int main()
{
	int arr[13] = {0};
	int flag;

	for(int i = 0; i < 5; i++)
	{
		int a;
		cin >> a;
		arr[a - 1]++;
	}

	flag = 0;

	for(int i = 0; i < 13; i++)
	{
		if(arr[i] == 3)
			flag += 1;
		else if(arr[i] == 2)
			flag += 10;
	}

	if(flag == 11)
			cout << "Yes" << endl;
	else
			cout << "No" << endl;
}
