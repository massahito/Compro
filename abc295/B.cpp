#include <iostream>

using namespace std;
int main()
{
	int R, C;
	char map[20][20], chr;
	bool mp[20][20] = 
	cin >> R >> C;
	
	for()



void bomb(char *map, int x, int y, int C, int R, int dist)
{
	if(x <= 0 || C <= x || y <= 0 || R <= y || dist == 0)
		return ;
	if(map[x][y])
