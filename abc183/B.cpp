#include <iostream>

using namespace std;

int main()
{
	double s_x, s_y, g_x, g_y;

	cin >> s_x >> s_y >> g_x >> g_y;

	printf("%0.10f\n", (s_y/ (s_y + g_y)) * (g_x - s_x) + s_x);
}
