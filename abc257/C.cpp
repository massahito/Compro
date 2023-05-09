#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int N, X;
	int child;
	string	S;

	cin >> N;
	cin >> S;
	for(int i = 0; i < N; i++)
		if(S[i])
			child++;
	vector<int, pair<int, int>> vct(N);
	for(int i = 0; i < N; i++)
	{
		int w;
		cin >> w;
		vct[i].first = w;
		vct[i].second = S[i] - '0';
	}
	sort(vct.begin(), vct.end());
	for(int i = 0; i < N; i++)
	{
		
		


