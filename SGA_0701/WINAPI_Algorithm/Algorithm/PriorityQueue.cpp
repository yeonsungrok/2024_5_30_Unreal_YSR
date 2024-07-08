#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>
#include <concurrent_priority_queue.h>

using namespace std;
// �켱���� ť
// 1. ��������Ʈ��
// 2. �θ� �׻� �ڽĺ��� ũ��(�ִ���)
class Priority_queue
{
public:
	// [70]/[50][60] / [40][30][10][5]
	void push(const int& value)
	{
		_container.push_back(value);
		int now = _container.size() - 1;
		
		while (true)
		{
			if (now <= 0) // ù��° ã������ �񱳹� ����
				break;

			int parent = (now - 1) / 2;
			if (_container[parent] > _container[now])
				break;

			// �ڽ��� �θ𺸴� ū ���
			std::swap(_container[now], _container[parent]);
			now = parent;

		}

	}


	// �������� �ִ밪�̾���� pop����� ����, [70]/[50][60] / [40][30][10][5]
	void pop()
	{
		_container[0] = _container.back();
		_container.pop_back();
		//[5] / [50][60] / [40][30][10][]

		int now = 0;
		while (true) // Ʈ�� ��ȸ�ϸ鼭 �ڽĵ� �ٲ㰡�� ����
		{
			int leftChild = now * 2 + 1;
			int rightChild = now * 2 + 2;

			// �ڽ��� ���� ��Ȳ
			if (leftChild >= (int)_container.size())
			{
				break;
			}
			
			// leftChild, rightChild�� ���ϸ鼭 ���� �� ū ������ Ȯ��
			int next = now;
			if (_container[next] < _container[leftChild])
			{
				next = leftChild;
			}

			// rightChild�� ��ȿ���� Ȯ��
			if (rightChild < (int)_container.size() && _container[next] < _container[rightChild])
			{
				next = rightChild;
			}

			if (next == now)
				break;
			std::swap(_container[now], _container[next]);
			now = next;
		}

	}

	const int& top()
	{
		
		return _container.front();
	}
	bool empty()
	{
		
		return _container.size() == 0;
	}

private:
	
	vector<int> _container;

};




int main()
{
	//priority_queue<int, vector<int>, greater<int>> pq;
	Priority_queue pq;

	pq.push(5);
	pq.push(10);
	pq.push(50);
	pq.push(100);
	pq.push(1);
	pq.push(2);
	pq.push(4);

	// N������ M��ŭ �����ϰ�ʹ�.
	// => partial_sort => M * logN ��ŭ �ɸ� // �κ�����

	while (true)
	{
		if (pq.empty()) break;
		int top = pq.top();

		cout << top << endl;

		pq.pop();

	}


	return 0;
}