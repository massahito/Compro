#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int		N;

	cin >> N;
	
	int		left = 0;
	int		right = N;
	while (right - left > 1)
	{
		int		mid = (left + right) / 2;
		char	num;
		
		cout << '?' << " " << mid << endl;
		cin >> num;
		if (num == '0')
			left = mid;
		else
			right = mid;
	}
	cout << '!' << " " << left << endl;
}
		
