#include <iostrem>
#include <vector>
using namespace std;

int  main()
{
	int H, W;
	char A[30][30], B[30][30];

	cin >> H >> W;
	
	for(int  i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> A[i][j];
	for(int  i = 0; i < H; i++)
		for(int j = 0; j < W; j++)
			cin >> B[i][j];
	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			int ok = 1;
			for(int k = 0; k < H; k++)
			{
				for(int l = 0; l < W )
	


