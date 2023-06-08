#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;

	cin >> N;

	vector<int> x(N), y(N), h(N);

	for(int i = 0; i < N; i++)
		cin >> x[i] >> y[i] >> h[i];
	for(int i = 0; i <= 100; i++)
	{
		for(int j = 0; j <= 100; j++)
		{
			int	H_min = 0, H = -1, ans = -1;
			for(int k = 0; k < N; k++)
			{

