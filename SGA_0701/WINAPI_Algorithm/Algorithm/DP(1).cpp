#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;
// DP(����ȭ)
// 1. �޸������̼�
// - ��������, �޸������̼�, ���ϱ� ���ܰ�� ..
// ===> �����κб���(����)�� �˾ƾ��Ѵ�... ��ȭ��(��ȭ�����˾ƾ� ����ȭ..)

// ������ ������ �ִ�.
// ������ A, B, C  (3������ �Ѱ��� n) x (2������ �Ѱ��� r) = 6�������
// ������ �ߺ��� ���� �����Ѵ�..

// ������ ��ȭ��
// nCr = n -1Cr + n-1Cr-1

// n <= 100
// r <= 100
vector<vector<int>> cache = vector<vector<int>>(101, vector<int>(101, -1));

int Combination(int n, int r)
{
	// ��������
	if (r == 0 || n == r)
		return 1; // �Ѱ��� ����� ��..

	if (r == 1)
		return n; // 1�� �̾Ҵٸ� n�� 1��

	// �޸������̼�
	int& ref = cache[n][r];
	if(ref != -1)
	{
		return ref;
	}
	
	// ���ϱ�
	ref = Combination(n - 1, r) + Combination(n - 1, r - 1);

	return ref;
}
	
int main()
{
	//cout << Combination(5, 3) << endl;
	vector<int> v = { 1,2,3,4,5,6,7 };
	

	//7P4  ��ȸ������...  next_permutation �ٵ������� ������ ��
	int count = 1;
	while (true)
	{
		// 4 x 3 x 2 x 1
		if (std::next_permutation(v.begin(),v.begin() + 4))
		{
			count++;
			cout << v[0] << v[1] << v[2] << v[3] << endl;
		}
		else
		{
			break;
		}
	}
	cout << count << endl;

	return 0;
}




