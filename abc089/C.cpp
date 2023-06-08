#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int N;
	long long count = 0;
	map<char, long long> mp;
	string S;

	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> S;
		mp[S[0]] = mp[S[0]] + 1;
	}
	
	count += (mp['M'] *  mp['A'] * mp['R']); 
	count += (mp['M'] *  mp['A'] * mp['C']); 
	count += (mp['M'] *  mp['A'] * mp['H']); 
	count += (mp['M'] *  mp['R'] * mp['C']); 
	count += (mp['M'] *  mp['R'] * mp['H']); 
	count += (mp['M'] *  mp['C'] * mp['H']); 
	count += (mp['A'] *  mp['R'] * mp['C']); 
	count += (mp['A'] *  mp['R'] * mp['H']); 
	count += (mp['A'] *  mp['C'] * mp['H']); 
	count += (mp['R'] *  mp['C'] * mp['H']); 
	cout << count << endl;
}
	

		
