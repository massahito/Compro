#include <iostream>
#include <vector>
#include <set>

using namespace std;
int root(vector<int> &U, int x)
{
	if(x == U[x])
		return (x);
	return (U[x] = root(U, U[x]));
}

void merge(vector<int> &U, int x, int y)
{
	int xroot = root(U, x);
	int yroot = root(U, y);
	
	if(xroot == yroot)
		return ;
	U[yroot] = xroot;
}

int main()
{
	int N, M;
	set<int> S;

	cin >> N >> M;
	vector<int> U(N, 0);
	for(int i = 0; i < N; i++)
		U[i] = i;
	for(int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		merge(U, a, b);
	}
	for(int i = 0; i < N; i++)
		S.insert(root(U, i));
	cout << S.size() - 1 << endl;
}

	
