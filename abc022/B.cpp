#include <iostream>
#include <set>

using namespace std;

int main()
{
	int			N, count = 0;
	set<int>	S;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		int		A;
		cin >> A;
		if(S.find(A) != S.end())
			count++;
		S.insert(A);
	}
	cout << count << endl;
}
