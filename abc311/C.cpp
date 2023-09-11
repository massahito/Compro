#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(void)
{
	int		N;

	cin >> N;

	vector<int> A(N);
	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		A[i]--;
	}

	for(int i = 0; i < N; i++)
	{
		set<int>	S;
		bool		isgood = true;

		S.insert(i);
		int		j = A[i];
		while(i != j)
		{
			if (S.find(j) != S.end())
			{
				isgood = false;
				break;
			}
			S.insert(j);
			j = A[j];
		}
		if(2 <= S.size() && isgood)
		{
			cout << S.size() << endl;
			cout << i + 1 << " ";
			int k = A[i];
			while(i != k)
			{
				cout << k + 1 << " ";
				k = A[k];
			}
			cout << endl;
			return (0);
		}
	}
}
		
