#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, X;
	int price = 0;

	cin >> N >> X;
	vector<int> A(N);
	for(int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		if(i % 2)
			a--;
		price += a;
	}
	if (price <= X)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return (0);
}
