#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

// Enchant 
// N��ŭ ��ȭ
// +1, +2, +3 �¹ۿ� �����Ǽ��� ����.
// �̶� N��ŭ ��ȭ�Ҷ� ������ ����� ���� ���϶�.
// �̶� (1 <= N <= 100000)

int N = 7;  
// +1 +1 +1
// +1 +2
// +2 +1
// +3

// result�� ������� 4���� ����� �ϸ� ��

// N = 1�϶� 1���� ���
// N = 2�϶� 2���� ���
// N = 3�϶� 4���� ���
// N = 4�϶� 7���� ���
//... ��Ģ��? 4�� �տ� 3���� ���Ѱ�(7�������)... �̰��� ��ȭ��..

vector<int> cache = vector<int>(100000, -1);

int Enchant(int num)
{
	// ��������
	if (num == 0)
		return 1;
	
	if (num < 0)
		return 0;
		
	// �޸������̼�
	int& ref = cache[num];
	if (ref != -1)
		return ref;

	return Enchant(num -1) + Enchant(num - 2) + Enchant(num - 3);  // ��ȭ���� �̷��Ե�...
}

int main()
{
	//N = 15; // �ٲٸ� ��� ��ȯ
	int result = Enchant(15);
	cout << result << endl;


	return 0;
}
