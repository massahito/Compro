
#include <iostream>
#include <set>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
	int N;
	long M;
	long X;
	set<long> st;
	int i;
	cin >> N >> X;
	i = 0;
	while (i < N)
	{
		cin >> M;
		st.insert(M);
		i++;
	}
	i = 0;
	decltype(st)::iterator it = st.begin();
	while(it != st.end())
	{
		decltype(st)::iterator ans = st.find(X + (*it));
		if(ans != st.end())
		{
			cout << "Yes" << endl;
			return 0;
		}
		it++;
	}
	cout << "No" << endl;
	return 0;
}
