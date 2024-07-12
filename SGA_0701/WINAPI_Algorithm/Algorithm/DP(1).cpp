#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;
// DP(최적화)
// 1. 메모이제이션
// - 기저사항, 메모이제이션, 구하기 세단계로 ..
// ===> 최적부분구조(문제)를 알아야한다... 점화식(점화식을알아야 최적화..)

// 순열과 조합이 있다.
// 순열은 A, B, C  (3가지중 한가지 n) x (2가지중 한가지 r) = 6가지방법
// 조합은 중복된 값을 빼야한다..

// 조합의 점화식
// nCr = n -1Cr + n-1Cr-1

// n <= 100
// r <= 100
vector<vector<int>> cache = vector<vector<int>>(101, vector<int>(101, -1));

int Combination(int n, int r)
{
	// 기저사항
	if (r == 0 || n == r)
		return 1; // 한가지 경우의 수..

	if (r == 1)
		return n; // 1을 뽑았다면 n은 1개

	// 메모이제이션
	int& ref = cache[n][r];
	if(ref != -1)
	{
		return ref;
	}
	
	// 구하기
	ref = Combination(n - 1, r) + Combination(n - 1, r - 1);

	return ref;
}
	
int main()
{
	//cout << Combination(5, 3) << endl;
	vector<int> v = { 1,2,3,4,5,6,7 };
	

	//7P4  순회구현은...  next_permutation 다돌렸을때 가지의 수
	int count = 1;
	while (true)
	{
		// 4 x 3 x 2 x 1
		if (std::next_permutation(v.begin(),v.begin() + 4))
		{
			count++;
			cout << v[0] << v[1] << v[2] << v[3] << endl;
		}
		else
		{
			break;
		}
	}
	cout << count << endl;

	return 0;
}




