#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int main()
{
	long long L;
	int	N1, N2;

	cin >> L >> N1 >> N2;
	queue<pair<int, long long>> A, B;

	for(int i = 0; i < N1; i++)
	{
		long long v, l;
		cin >> v >> l;
		A.push(make_pair(v, l));
	}
	for(int i = 0; i < N2; i++)
	{
		long long v, l;
		cin >> v >> l;
		B.push(make_pair(v, l));
	}
	
	long long count = 0;
	for(long long i = 0; i < L; i++)
	{
		if(A.empty() || B.empty())	
			break;
		if(A.front().first == B.front().first)
			count++;
		A.front().second--;
		B.front().second--;
		if(A.front().second == 0)
			A.pop();
		if(B.front().second == 0)
			B.pop();
	}
	cout << count << endl;
}
