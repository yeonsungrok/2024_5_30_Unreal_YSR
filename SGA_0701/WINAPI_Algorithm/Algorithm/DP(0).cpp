#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

// �Ǻ���ġ ����
// Fibonacci ����

int count_my = 0;

// �ذ��� : DP
// �޸������̼� ... memo
vector<int> cache = vector<int>(100, -1);


int Fibonacci(int n)
{
	// ��������
	if (n == 0 || n == 1) return 1;


	// �޸����� (����ȭ)
	int& ref = cache[n];

	if (ref != -1)
		return ref;

	if (n == 2)
		count_my++;
	
	// ���ϱ�
	ref = Fibonacci(n - 1) + Fibonacci(n - 2);
	return ref;
	

}

int main()
{

	__int64 start = GetTickCount64();   //�� ��¹��

	cout << Fibonacci(40) << endl;
	cout << "... F(2) ���� : "<< count_my << endl;

	__int64 end = GetTickCount64();		//�� ��¹��


	cout << end - start << "ms" << endl;

	return 0;
}
