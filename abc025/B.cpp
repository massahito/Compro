#include <iostream>
#include <string>

using namespace std;

int main()
{
	int		N, A, B, pos = 0;

	cin >> N >> A >> B;

	for(int i = 0; i < N; i++)
	{
		string	s;
		int		d;

		cin >> s >> d;
		if(s == "West")
			pos -= min(max(A, d), B);
		else
			pos += min(max(A, d), B);
	}
	if(0 < pos)
		cout << "East" << " " << abs(pos) << endl;
	else if(pos < 0)
		cout << "West" << " " << abs(pos) << endl;
	else
		cout << 0 << endl;
}

