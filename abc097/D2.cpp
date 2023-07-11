#include <iostream>
#include <vector>

using namespace std;

int root(vector<int> &U, int x)
{
	if(x == U[x])
		return x;
	return (U[x] = root(U, U[x]));
}

void	merge(vector<int> &U, int x, int y)
{
	int	xroot = root(U, x);
	int	yroot = root(U, y);

	if(xroot == yroot)
		return ;
	U[yroot] = xroot;
}
	
int main()
{
	int N, M;
	int count = 0;

	cin >> N >> M;
	vector<int> P(N), U(N);
	vector<int> X(M), Y(M);
	for(int i = 0; i < N; i++)
	{
		int p;
		cin >> p;
		p--;
		P[i] = p;
		U[i] = i;
	}
	for(int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		merge(U, x, y);
	}
	for(int i = 0; i < N; i++)
		if(root(U, i) == root(U, P[i]))
			count++;
	cout << count << endl;	

}
