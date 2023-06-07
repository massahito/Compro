#include <iostream>
#include <set>
#include <vector>
#include <queue>

using namespace std;


int	root(vector<int> &U, int i)
{
	if(U[i] == i)
		return (i);
	return (root(U, U[i]));
}

void	merge(vector<int> &U, int x, int y)
{
	int xroot = root(U, x);
	int yroot = root(U, y);
	
	if(xroot == yroot)
		return ;
	U[xroot] = yroot;
}

int main()
{
	int N, M;

	cin >> N >> M;
	vector<int> U(N);
	vector<int> v(M), u(M);
	
	for(int i = 0; i < N; i++)
		U[i] = i;
	for(int i = 0; i < M; i++)
	{
		cin >> v[i] >> u[i];
		v[i]--;
		u[i]--;
		merge(U, v[i], u[i]);
	}
	vector<int> vs(N), es(N);

	for(int i = 0; i < N; i++)
		vs[root(U, i)]++;
	for(int i = 0; i < M; i++)
		es[root(U, v[i])]++;
	if(vs == es)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

	
