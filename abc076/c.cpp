#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int main()
{
	int N, K;
	string S;

	cin >> N >> K;
	cin >> S;
	map<char, priority_queue<int>> dict;

	for(int i = 0; i < N; i++)
		dict[S[i]].push(i);

	for(int i = 0; i < K; i++)
	{
		for(auto iter = dict.begin(); iter != dict.end(); iter++)
		{
			if (iter->first == S[i] && iter->second.size() != 0)
				break;
			else
			{
				char tmp;

				tmp = S[i];
				while(iter->second.size() && iter->second.top() < i)
					iter->second.pop();
				if (iter->second.size() == 0)
					continue;
				S[i] = S[iter->second.top()];
				S[iter->second.top()] = tmp;
				iter->second.pop();
				break;
			}
		}
	}
	cout << S << endl;
}

				
				

