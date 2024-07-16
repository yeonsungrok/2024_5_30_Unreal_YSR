#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {

    vector<int> answer;
    //int answer = 0;
    //int Divide = n;

    for (int i = 0; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer.push_back(n);
        }
    }


    //return answer;
}