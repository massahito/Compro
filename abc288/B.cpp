#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, K;	

	cin >> N >> K;

	vector<string> S(N);
	vector<string>::iterator iter = S.begin();
	for(int i = 0; i < N; i++)
		cin >> S[i];
	sort(iter, iter + K);
	for(int i = 0; i < K; i++)
		cout << S[i] << endl;
}

