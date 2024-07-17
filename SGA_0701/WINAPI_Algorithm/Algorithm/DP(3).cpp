#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

// Enchant 
// N만큼 강화
// +1, +2, +3 셋밖에 가지의수는 없다.
// 이때 N만큼 강화할때 나오는 경우의 수를 구하라.
// 이때 (1 <= N <= 100000)

int N = 7;  
// +1 +1 +1
// +1 +2
// +2 +1
// +3

// result는 결과값이 4가지 방법을 하면 됨

// N = 1일때 1가지 방법
// N = 2일때 2가지 방법
// N = 3일때 4가지 방법
// N = 4일때 7가지 방법
//... 규칙은? 4는 앞에 3개를 더한값(7가지방법)... 이것이 점화식..

vector<int> cache = vector<int>(100000, -1);

int Enchant(int num)
{
	// 기저사항
	if (num == 0)
		return 1;
	
	if (num < 0)
		return 0;
		
	// 메모이제이션
	int& ref = cache[num];
	if (ref != -1)
		return ref;

	return Enchant(num -1) + Enchant(num - 2) + Enchant(num - 3);  // 점화식은 이렇게됨...
}

int main()
{
	//N = 15; // 바꾸면 계속 변환
	int result = Enchant(15);
	cout << result << endl;


	return 0;
}
