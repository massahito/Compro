#include <iostream>
#include <vector>
#define INF 1<<30
using namespace std;

int main()
{
	int A, B, W;
	int minimum, maximum;

	cin >> A >> B >> W;
	vector<int> dp_max(W * 1010, 0), dp_min(W * 1010, INF);
	dp_max[0] = 0;
	dp_min[0] = 0;

	for(int i = 0; i < W * 1000; i++)
	{
		for(int j = A; j <= B; j++)	
		{
			if(i + j <= (W * 1000))
			{
				dp_max[i + j] = max(dp_max[i + j], dp_max[i] + 1);
				dp_min[i + j] = min(dp_min[i + j], dp_min[i] + 1);
			}
		}
	}
	if(dp_min[W * 1000] != INF && dp_max[W * 1000] != 0)
		cout << dp_min[W * 1000] << " " << dp_max[W * 1000] << endl;
	else
		cout << "UNSATISFIABLE" << endl;
}
				
		

	
