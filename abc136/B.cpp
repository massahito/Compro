#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	int count = 0;
	
	cin >> N;

	for(int i = 1; i <= N; i++)
		if(to_string(i).size() % 2)
			count++;
	cout << count << endl;
}

