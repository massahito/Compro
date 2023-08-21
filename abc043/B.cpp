#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string S;

	cin >> S;
	vector<bool> isprint(S.size(), true);

	for(int i = 0; i < S.size(); i++)
	{
		if(S[i] == 'B')	
		{
			isprint[i] = false;
			int j = i - 1;
			while(0 <= j)
			{
				if(isprint[j])
				{
					isprint[j] = false;
					break;
				}
				j--;
			}
		}
	}
	for(int i = 0; i < S.size(); i++)
		if(isprint[i])
			cout << S[i];
	cout << endl;
}
	

