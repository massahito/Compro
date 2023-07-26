#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string S, biggest, smallest;

	cin >> S;
	biggest = S;
	smallest = S;

	for(int i = 0; i < S.size(); i++)
	{
		rotate(S.begin(), S.begin() + 1, S.end());
		if(biggest < S)
			biggest  = S;
		if(S < smallest)
			smallest = S;
	}
	cout << smallest << endl;
	cout << biggest << endl;
}
	
	
