#include <iostream>
#include <vector>
#include <map>

int main(void)
{
	int			N, Q;

	cin >> N >> Q;
	vector<vector<int>>	B(N), C(N);

	for (int i = 0; i < Q; i++)
	{
		int num, i;

		cin >> num >> i;

		if (num == 1)
		{
			int j;
			cin >> j;



