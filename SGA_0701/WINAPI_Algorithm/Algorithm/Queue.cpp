#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

// queue : 줄 세우기(게임에서 큐 돌린다)
// First Input First Out : FIFO

template<typename T, typename Container = list<T>>
class Queue
{
public:

	void Push(const T& value) { container.push_back(value); }
	void Pop() { container.pop_front(); }
	bool Empty() { return container.size() == 0; }
	const T& Front() { return container.front(); }

private:

	list<int> container;
};


int main()
{
	Queue<int, list<int>> q;
	//queue<int>q;
	q.Push(51);
	q.Push(2);
	q.Push(3);
	q.Push(23);
	q.Push(77);
	
	while (true)
	{
		if (q.Empty() == true)
			break;
		cout << q.Front() << endl; // 업무
		q.Pop();

	}

	return 0;
}