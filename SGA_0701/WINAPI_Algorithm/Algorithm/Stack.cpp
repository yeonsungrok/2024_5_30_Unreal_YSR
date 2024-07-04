#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stack>

using namespace std;
/*
	stack : 팬케이크
	FILO : First Input Last Out 
*/


//int
template <typename T, typename Container = vector<int>>
class Stack
{
public:
	
	void Push(const T& value) { v.push_back(value); }
	void Pop() { v.pop_back(); }
	bool Empty() { return v.size() == 0; }
	const T& Top() { return v.back(); }

private:
	
	vector<int> v;
};


int main()
{
	stack<int> s;

	s.push(1);
	s.push(3);
	s.push(5);
	s.push(7);
	s.push(9);

	while (true)
	{
		if (s.empty())
			break;
		cout << s.top()<< endl;
		s.pop();
	}

	return 0;
}

