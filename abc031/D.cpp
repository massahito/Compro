#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	int K, N;

	cin >> K >> N;
	vector<int> V(N), S(K);
	vector<string> W(N);

	for(int i = 0; i < N; i++)
		cin >> V[i] >> W[i];
	
	for(int j = 0; j < pow(3, K); j++)
	{
		map<int, string> mp;
		//bit search
		int power = 1;
		for(int i = 0; i < K; i++)
		{
			S[i] = (j / power) % 3 + 1;
			power *= 3;
		}
		//check
		bool isgood = true;
		for(int i = 0; i < N; i++)
		{
			int n = V[i], length = 0;;
			string s = to_string(n);
			//length check
			for(int k = 0; k < s.size(); k++)
				length += S[(s[k] - '0') - 1];
			if(length != W[i].length())
			{
				isgood = false;
				break;
			}
			//compare
			length = 0;
			for(int k = 0; k < s.size(); k++)
			{
				string sub = W[i].substr(length, S[(s[k] - '0') - 1]);
				if(mp[(s[k] - '0') - 1] == "\0")
				{
					if(mp[(s[k] - '0') - 1] != sub)
					{
						isgood = false;
						break;
					}
				}
				else
					mp[(s[k] - '0') - 1] = sub;
				length += S[(s[k] - '0') - 1];
			}
		}
		if(isgood)
		{
			cout << "ok" << endl;
			return 0;
		}
	}
}
