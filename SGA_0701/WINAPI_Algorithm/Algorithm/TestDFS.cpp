#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

vector<bool> _visited;
vector<vector<bool>> adjacent;
void CreateGraph_AdjacentMatrix()
{


	adjacent = vector<vector<bool>>(7, vector<bool>(7, false));
	
	adjacent[0][0] = true;
	adjacent[0][3] = true;
	adjacent[0][7] = true;
	adjacent[0][8] = true;
	adjacent[0][9] = true;

	adjacent[1][1] = true;
	adjacent[1][2] = true;
	adjacent[1][5] = true;

	adjacent[2][0] = true;
	adjacent[2][1] = true;
	adjacent[2][2] = true;
	adjacent[2][5] = true;
	adjacent[2][9] = true;
	

	adjacent[3][0] = true;
	adjacent[3][3] = true;
	adjacent[3][4] = true;


	adjacent[4][3] = true;
	adjacent[4][4] = true;
	adjacent[4][8] = true;
	

	adjacent[5][1] = true;
	adjacent[5][2] = true;
	adjacent[5][5] = true;
	adjacent[5][7] = true;


	adjacent[6][6] = true;
	adjacent[6][7] = true;

	adjacent[7][0] = true;
	adjacent[7][5] = true;
	adjacent[7][7] = true;
	adjacent[7][9] = true;

	adjacent[8][0] = true;
	adjacent[8][4] = true;
	adjacent[8][8] = true;

	adjacent[9][0] = true;
	adjacent[9][2] = true;
	adjacent[9][7] = true;
	adjacent[9][9] = true;


}