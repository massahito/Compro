#include <iostream>
#include <vector>
using namespace std;

int		findRoot(vector<int> &V, int leaf)
{
	if (leaf == V[leaf])
		return (leaf);
	return (V[leaf] = findRoot(V, V[leaf]));
}

void	insertUnion(vector<int> &V, int root, int leaf)
{
	int r_root = findRoot(V, root);
	int r_leaf = findRoot(V, leaf);
	if (r_root == r_leaf)
		return ;
	V[r_leaf] = r_root;
	return ;
}


int main()
{
	int N, M;

	cin >> N >> M;

	vector<int> V(N), v(M), u(M);
	vector<int> vs(N, 0), es(N, 0);

	for (int i = 0; i < N; i++)
		V[i] = i;
	for (int i = 0; i < M; i++)
	{
		cin >> v[i]	 >> u[i];
		v[i]--;
		u[i]--;
		insertUnion(V, v[i], u[i]);
	}
	for (int i = 0; i < N; i++)
		vs[findRoot(V, i)]++;
	for (int i = 0; i < M; i++)
		es[findRoot(V, v[i])]++;
	if (vs == es)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
