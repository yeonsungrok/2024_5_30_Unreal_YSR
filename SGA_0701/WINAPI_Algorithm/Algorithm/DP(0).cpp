#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

// 피보나치 수열
// Fibonacci 수열

int count_my = 0;

// 해결방법 : DP
// 메모이제이션 ... memo
vector<int> cache = vector<int>(100, -1);


int Fibonacci(int n)
{
	// 기저사항
	if (n == 0 || n == 1) return 1;


	// 메모이제 (최적화)
	int& ref = cache[n];

	if (ref != -1)
		return ref;

	if (n == 2)
		count_my++;
	
	// 구하기
	ref = Fibonacci(n - 1) + Fibonacci(n - 2);
	return ref;
	

}

int main()
{

	__int64 start = GetTickCount64();   //초 재는방법

	cout << Fibonacci(40) << endl;
	cout << "... F(2) 연산 : "<< count_my << endl;

	__int64 end = GetTickCount64();		//초 재는방법


	cout << end - start << "ms" << endl;

	return 0;
}
