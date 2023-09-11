#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(void)
{
	int		N;

	cin >> N;
	vector<int> A(N), B(N), save;
	set<int>	S;

	for(int i = 0; i < N; i++)
	{
		cin >> A[i];
		A[i]--;
	}
		
	int idx = 0;
	while(S.size() <= N)
	{
		if(S.find(idx) != S.end() && 2 <= S.size())
		{
			cout << save.size() - B[idx] << endl;
			for(int i = B[idx]; i < save.size(); i++)
				cout << save[i] + 1 << " ";
			cout << endl;
			return (0);
		}
		S.insert(idx);
		B[idx] = save.size();
		save.push_back(idx);
		idx = A[idx];
	}
}
	
			
		
