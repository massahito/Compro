#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N, ans = 0;
	string S;

	cin >> N;
	cin >> S;

	for(int i = 0; i < N; i++)
	{
		int arr1[26] = {0}, arr2[26] = {0};
		int count = 0;
		for(int j = 0; j < N; j++)	
		{
			if(j <= i)
				arr1[S[j] - 'a']++;
			else
				arr2[S[j] - 'a']++;
		}
		for(int j = 0; j < 26; j++)	
			if(arr1[j] && arr2[j])
				count++;
		ans = max(ans, count);
	}
	cout << ans << endl;
}
					
