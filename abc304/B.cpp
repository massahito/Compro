#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
	int N;
	int digit;

	cin >> N;
	digit = to_string(N).size();
	cout << N - N % (int)pow(10, max(0, digit - 3)) << endl;
}
