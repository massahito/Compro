#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int N, level, ans;
	bool good;
	string S;

	cin >> N;
	cin >> S;
	
	ans = -1;
	level = 0;
	good = false;
	for(auto chr: S)
	{	
		if (chr == 'o')
			level++;
		else if(chr == '-')
		{
			good = true;
			if (ans < level && level != 0)
				ans  =level;
			level = 0;
		}
	}
	if (good && ans < level && level != 0)
		ans = level;
	cout << ans << endl;
	return (0);
}
