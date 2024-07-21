#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

// LIS (Longest Increasing Subsequence)
// ���� ���� �κ� ����
// ���� = ���ڸ� �����ϴ� ��

vector<int> v = { 5, 6, 7, 1, 2, 3, 4 };   //3, 5, 7, 9, 1, 4, 8
// ���� �κ� ���� : ���� �����Ǵ� �κ� ����
// ���� ���� �κ� ���� : ���� �κ� ���� �߿� ���� �� ��

// Lis(4) : 1
// Lis(3) .... v[3] <= v[next] -> : 2
// Lis(2) .... v[2] <= v[3] ->  / v[2] <= v[4] -> 2
// Lis(1) .... Lis(2) + 1 / Lis(3) +1 / Lis(4) +1

vector<int> cache; // ���� v[3] ��� Ȯ����...�̷��� �޸����̼� ���..

int Lis(int pos)
{
//��������
	if (pos == v.size() - 1)
		return 1;

	// �޸������̼�
	int& ref = cache[pos];
	if (ref != -1)
		return ref;

	ref = 1;
	for (int next = pos + 1; next < v.size(); next++)
	{
		if (v[pos] <= v[next])
		{
			ref = max(ref, Lis(next) + 1);
		}
	}

	return ref;
}


int main()
{
	cache = vector<int>(v.size(), -1);
	int lis = 1;

	for (int i = 0; i < v.size(); i++)
	{
		lis = max(lis, Lis(i));
	}
	
	cout << lis << endl;
	
	
	
	return 0;
}