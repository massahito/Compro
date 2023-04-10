#include <cstdlib>
#include <iostream>
#include <string>

using namespace	std;
int	main(void)
{
	int N;
	int i;
	string S;

	cin >> N;
	cin >> S;
	i = 0;
	while (S[i])
	{
		if (S[i + 1] && abs(S[i + 1] - S[i]) != abs('F' - 'M'))
		{
			cout << "No" << endl;
			return (0);
		}
		i++;
	}
	cout << "Yes" << endl;
	return (0);
}