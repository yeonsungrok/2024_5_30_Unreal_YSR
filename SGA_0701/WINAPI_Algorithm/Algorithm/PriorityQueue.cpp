#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>
#include <concurrent_priority_queue.h>

using namespace std;
// 우선순위 큐
// 1. 완전이진트리
// 2. 부모가 항상 자식보다 크다(최대힙)
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
			if (now <= 0) // 첫번째 찾으려는 비교문 조건
				break;

			int parent = (now - 1) / 2;
			if (_container[parent] > _container[now])
				break;

			// 자식이 부모보다 큰 경우
			std::swap(_container[now], _container[parent]);
			now = parent;

		}

	}


	// 맨위에가 최대값이어야지 pop만들수 있음, [70]/[50][60] / [40][30][10][5]
	void pop()
	{
		_container[0] = _container.back();
		_container.pop_back();
		//[5] / [50][60] / [40][30][10][]

		int now = 0;
		while (true) // 트리 순회하면서 자식들 바꿔가는 과정
		{
			int leftChild = now * 2 + 1;
			int rightChild = now * 2 + 2;

			// 자식이 없는 상황
			if (leftChild >= (int)_container.size())
			{
				break;
			}
			
			// leftChild, rightChild와 비교하면서 누가 더 큰 수인지 확인
			int next = now;
			if (_container[next] < _container[leftChild])
			{
				next = leftChild;
			}

			// rightChild가 유효한지 확인
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

	// N개에서 M만큼 정렬하고싶다.
	// => partial_sort => M * logN 만큼 걸림 // 부분정열

	while (true)
	{
		if (pq.empty()) break;
		int top = pq.top();

		cout << top << endl;

		pq.pop();

	}


	return 0;
}