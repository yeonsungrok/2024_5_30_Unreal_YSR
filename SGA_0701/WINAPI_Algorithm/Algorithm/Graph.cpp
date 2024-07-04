#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

/*
 �׷���
 �����ϸ�Ʈ ���Ϸ� (�Ѻױ׸��� ���ؼ� �׷������ �ڷᱸ���� ����)

 ����(Node, Vertex)�� ����(edge)���� �̷���� �ڷᱸ��

 ��� ���������� 1. ��������Ʈ
*/
vector<vector<int>> adjacent_List; //adjacent ������ ��
void CreateGraph_AdjacentList()
{
	adjacent_List = vector<vector<int>>(7, vector<int>());

	adjacent_List[0].push_back(1);
	adjacent_List[0].push_back(2);
	adjacent_List[0].push_back(4);

	adjacent_List[1].push_back(0);
	adjacent_List[2].push_back(3);
	adjacent_List[2].push_back(5);

	adjacent_List[3].push_back(2);

	adjacent_List[4].push_back(0);
	adjacent_List[4].push_back(6);

	adjacent_List[5].push_back(2);

	adjacent_List[6].push_back(4);
}

/*
 ��� ���������� 2. �������
*/
vector<vector<bool>> adjacent_Matrix;
void CreateGraph_AdjacentMatrix()
{
	//		0	1	2	3	4	5	6
	//	0	T	T	T	F	T	F	F
	//	1	T	T	F	F	F	F	F
	//	2	.....
	//	3
	//	4

	adjacent_Matrix = vector<vector<bool>>(7, vector<bool>(7, false));

	adjacent_Matrix[0][0] = true;
	adjacent_Matrix[0][1] = true;
	adjacent_Matrix[0][2] = true;
	adjacent_Matrix[0][4] = true;

	adjacent_Matrix[1][0] = true;
	adjacent_Matrix[1][1] = true;

	adjacent_Matrix[2][0] = true;
	adjacent_Matrix[2][2] = true;
	adjacent_Matrix[2][3] = true;
	adjacent_Matrix[2][5] = true;
	
	adjacent_Matrix[3][2] = true;
	adjacent_Matrix[3][3] = true;

	adjacent_Matrix[4][0] = true;
	adjacent_Matrix[4][4] = true;
	adjacent_Matrix[4][6] = true;

	adjacent_Matrix[5][2] = true;
	adjacent_Matrix[5][5] = true;

	adjacent_Matrix[6][4] = true;
	adjacent_Matrix[6][6] = true;


}

int main()
{
	CreateGraph_AdjacentList();
	CreateGraph_AdjacentMatrix();

	// ���� : 0�� 2�� ������ ����Ǿ��ֽ��ϱ�?
	for (auto vertex : adjacent_List[0])
	{
		if (vertex == 2)
			cout << "adjacent_List : 0�� 2�� �پ�����" << endl;
	}
		
	/*auto iter = std::find(adjacent_List[0].begin(), adjacent_List[0].end(), 2);
	if(iter != adjacent_List[0].end())
		cout << "0�� 2�� �پ�����" << endl;*/


	//adjacent_List.begin();

	//// 5�� 4�� ����Ǿ��ֽ��ϱ�?
	//for (auto vertex : adjacent_List[5])
	//{
	//	if (vertex == 4)
	//	{
	//		cout << "5�� 4�� �پ�����" << endl;
	//	}
	//	else
	//	{
	//		cout << "5�� 4�� �Ⱥپ�����" << endl;
	//	}
	//}


	//���� : 0�� 2�� ������ ������ �Ǿ��ֽ��ϱ�? �������

	if(adjacent_Matrix[0][2])
		cout << "adjacent_Matrix : 0�� 2�� �پ�����" << endl;
	
	//���� : 5�� 4�� ����Ǿ��ֽ��ϱ�? �������
	if(adjacent_Matrix[5][4])
		cout << "adjacent_Matrix : 5�� 4�� �پ�����" << endl;

	return 0;
}



