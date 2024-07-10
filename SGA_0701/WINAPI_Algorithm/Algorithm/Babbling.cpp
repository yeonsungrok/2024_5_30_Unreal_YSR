#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;


vector<string> argment;
vector<string> babble = { "aya", "ye", "woo", "ma" };

vector<bool> visited;
unordered_map<string, int> canBabble;

// ����Ž���� DFS���� �� ������..
// �� 64���� �ܾ�. ����� ����
void DFS(int here, string word) 
{
    //// �������� ���� ���ʿ�� ����.. �ؿ��� visited[here]���� ������ ����Ǳ⶧����.
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

    //�湮�� Ǫ�°�(�ߺ�)
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