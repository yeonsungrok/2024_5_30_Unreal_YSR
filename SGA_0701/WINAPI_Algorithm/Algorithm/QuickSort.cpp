#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

// Heap sort   //�������̶��� �ٸ�
// ��Ʈ���� �ϳ��� �� ����ְ� �ϳ��� ������. ������

// ��� �ð� ���⵵ : N x logN��ŭ �ɸ���..
// �־��� ��� : N^2

int Partition ( vector<int>& v, int left, int right)
{
	int pivot = v[left];
	int lowIndex = left + 1;
	int highIndex = right;

	while (true)
	{
		if (lowIndex > highIndex)
			break;
		
		// lowIndex�� �׻� pivot���� �۾ƾ��Ѵ�.
		// ������ ���� index�� Ȯ��
		while (lowIndex <= right && pivot >= v[lowIndex])
		{
			lowIndex++;
		}

		// lowIndex�� �׻� pivot���� Ŀ���Ѵ�.
		// ũ�� ���� index�� Ȯ��
		while(highIndex >= left + 1 && pivot <= v[highIndex])
		{
			highIndex--;
		}

		if (lowIndex < highIndex)
			std::swap(v[lowIndex], v[highIndex]);

	}
	std::swap(v[highIndex], v[left]);

	return highIndex;

}


void QuickSort(vector<int>& v, int left, int right)
{
	// ��������
	if (left > right)
		return;

	int pivotIndex = Partition(v, left, right);
	cout << left << " ~ " << pivotIndex -1 << endl;

	QuickSort(v, left, pivotIndex - 1);
	QuickSort(v, pivotIndex + 1, right);
}

 
int main()
{
	//					  30A					30B
	vector<int> v = { 55, 30, 15, 100, 1, 5, 70, 30};
	QuickSort(v, 0, v.size()-1);

	// std::sort()�� quick sort ������� �ϴ°����̴�..

	return 0;
}