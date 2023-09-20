#include <iostream>
#include <vector>

using namespace std;

long long	binarySearch(vector<long long> &F, long long base,long long left, long long right);

int main()
{
	long long L, N1, N2;

	cin >> L >> N1 >> N2;
	vector<pair<long long>>		L1(N);
	vector<long long>			F1(N);


	for (int i = 0; i < N1; i++)
	{
		long long v, l;
		
		cin >> v >> l;
		if (i == 0)
			F1[i] = l;
		else
			F1[i] = F1[i - 1] + l;
		L1[i] = make_pair(v, l);
	}
	long long sum = 0;
	for (int i = 0; i < N2; i++)
	{
		long long v, l. idx
		cin >> v >> l;
		sum += 
		idx = binarySearch(F1, sum, 0, N1);
		if (L1[idx].first == v)
		{
			cout << max(F[idx] - sum,  << endl;
			
		



long long	binarySearch(vector<long long> &F, long long base,long long left, long long right)
{
	while (right - left > 1)	
	{
		long long mid = (left + right) / 2;
		if (mid <= F[mid])
			left = mid;
		else
			right = mid
	}
	return (left);
}
			

