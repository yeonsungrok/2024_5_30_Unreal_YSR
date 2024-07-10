#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;


vector<string> argment;
vector<string> babble = { "aya", "ye", "woo", "ma" };

vector<bool> visited;
unordered_map<string, int> canBabble;

// 완전탐색이 DFS에서 된 내용임..
// 총 64가지 단어. 만들수 있음
void DFS(int here, string word) 
{
    //// 기저사항 굳이 할필요는 없음.. 밑에서 visited[here]에서 끝나면 종료되기때문에.
    //if (visited[here] == true)
    //    return;

    visited[here] = true;
    word += babble[here];

    canBabble[word] = 1;

    for (int there = 0; there < 4; there++)
    {
        if (here == there)
            continue;
        if (visited[there] == true)
            continue;
        
        DFS(there, word);
    }

    //방문을 푸는곳(중복)
    visited[here] = false;
}



void DFS_ALL()
{
    for (int i = 0; i < 4; i++)
    {
        DFS(i, "");
    }
}


int solution(vector<string> babbling) 
{

    int answer = 0;
    visited = vector<bool>(4, false);

    DFS_ALL();
    
    for (auto word : babbling)
    {
        if(canBabble.count(word) != 0)
            answer++;
    }

    return answer;
}



int main()
{
    cout << solution(argment) << endl;
    return 0;
}