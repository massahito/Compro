#include <iostream>
#include <vector>

using namespace std;
int func(vector<int> &A, int current, int n);

int N, M, Q;
int ans = 0;
vector<int> a, b, c, d;

int main()
{

	cin >> N >> M >> Q;
	for(int i = 0; i < Q; i++)
	{
		int a1, b1, c1, d1;
		cin >> a1 >> b1 >> c1 >> d1;
		a1--;
		b1--;
		a.push_back(a1);
		b.push_back(b1);
		c.push_back(c1);
		d.push_back(d1);
	}	
	vector<int> A(N, 0);
	cout << func(A, 1, 0) << endl;

}


int func(vector<int> &A, int current, int n)
{
	int ans = 0;
	if(n == N)
	{
		int	num = 0;
		for(int i = 0; i < Q; i++)
			if(A[b[i]] - A[a[i]] == c[i])
				num += d[i];
		return num;
	}
	for(int i = current; i <= M; i++)
	{
		A[n] = i;
		ans = max(ans, func(A, i, n + 1));
	}
	return (ans);
}
	
		
