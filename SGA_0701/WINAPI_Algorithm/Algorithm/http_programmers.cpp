//#include <iostream>
//#include <string>
//#include <vector>
//// ����Ž�� �Ƿε�..
//using namespace std;
//
//int answer = 0;
//vector<vector<int>> d;
//vector<bool> visited;
//
//void DFS(int here, int k, int count)
//{
//    // �ʿ䵵�� k���� ���ٶ�� ����
//    visited[here] = true;
//    k -= d[here][1];
//
//    for (int there = 0; there < d.size(); there++)
//    {
//        if (here == there) continue;
//        if (visited[there]) continue;;
//        int needK = d[there][0];
//        if (needK > k) continue;
//
//        DFS(there, k, count + 1);
//        visited[there] = false;
//    }
//
//    answer = std::max(answer, count);
//
//}
//
//void DFS_ALL(int k)
//{
//    for (int i = 0; i < d.size(); i++)
//    {
//        visited = vector<bool>(d.size(), false);
//
//        int needK = d[i][0];
//        // ó�� �湮�ϱ� ���� �ʿ䵵�� k���� ������� ���� ��.
//        if (needK > k) continue;
//        DFS(i, k, 1);
//
//    }
//}
//
//int solution(int k, vector<vector<int>> dungeons) {
//    d = dungeons; // ���縵 �� d...
//    visited = vector<bool>(d.size(), false);
//    DFS_ALL(k);
//
//
//    return answer;
//}




//
//#include <string>
//#include <vector>
//#include <unordered_set>
//#include <algorithm>
//
//using namespace std;
//
//bool isPrime(int number) {
//    if (number <= 1)
//        return false;
//    if (number == 2)
//        return true;
//    if (number % 2 == 0)
//        return false;
//
//    for (int i = 3; i * i <= number; i += 2)
//    {
//        if (number % i == 0)
//            return false;
//    }
//    return true;
//}
//
//// ��͸� �̿��Ͽ� ��� ���� ������ �����ϴ� �Լ�
//void generateNumbers(string current, string remaining, unordered_set<int>& generated) {
//    // ���� ������ ������� ������ ���ڷ� ��ȯ�Ͽ� ����
//    if (!current.empty()) {
//        generated.insert(stoi(current));
//    }
//
//    // ���� ���ڵ��� �ϳ��� �߰��ϸ鼭 ��� ȣ��
//    for (size_t i = 0; i < remaining.size(); ++i) {
//        generateNumbers(current + remaining[i], remaining.substr(0, i) + remaining.substr(i + 1), generated);
//    }
//}
//
//// �־��� ���� ������� ���� �� �ִ� �Ҽ��� ������ ã�� �Լ�
//int solution(string numbers) {
//    unordered_set<int> generated;
//    generateNumbers("", numbers, generated);
//
//    int answer = 0;
//    // ������ ���ڵ��� �˻��Ͽ� �Ҽ����� �Ǻ�
//    for (int number : generated) {
//        if (isPrime(number)) {
//            ++answer;
//        }
//    }
//
//    return answer;
//}





////�˾���
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <iostream>
//
//using namespace std;
//
//
//vector<string> argment;
//vector<string> babble = { "aya", "ye", "woo", "ma" };
//
//vector<bool> visited;
//unordered_map<string, int> canBabble;
//
//// �� 64���� �ܾ�. ����� ����
//void DFS(int here, string word)
//{
//    //// �������� ���� ���ʿ�� ����.. �ؿ��� visited[here]���� ������ ����Ǳ⶧����.
//    //if (visited[here] == true)
//    //    return;
//
//    visited[here] = true;
//    word += babble[here];
//
//    canBabble[word] = 1;
//
//    for (int there = 0; there < 4; there++)
//    {
//        if (here == there)
//            continue;
//        if (visited[there] == true)
//            continue;
//
//        DFS(there, word);
//    }
//
//    //�湮�� Ǫ�°�(�ߺ�)
//    visited[here] = false;
//}
//
//
//
//void DFS_ALL()
//{
//    for (int i = 0; i < 4; i++)
//    {
//        DFS(i, "");
//    }
//}
//
//
//int solution(vector<string> babbling)
//{
//
//    int answer = 0;
//    visited = vector<bool>(4, false);
//
//    DFS_ALL();
//
//    for (auto word : babbling)
//    {
//        if (canBabble.count(word) != 0)
//            answer++;
//    }
//
//
//    return answer;
//
//}







//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int answer = 0;
//vector<string> generated;
//vector<bool> visited;
//
//// �Ҽ� ���θ� �Ǻ��ϴ� �Լ�
//bool numCheck(const string& numStr) {
//    if (numStr.empty()) return false;
//    if (numStr == "1" || numStr == "0") return false;
//
//    // ���� ���ڿ��� ������ ��ȯ ���� ���� �Ҽ� �Ǻ�
//    int number = 0;
//    for (char c : numStr) {
//        number = number * 10 + (c - '0');
//    }
//
//    if (number <= 1) return false;
//    if (number == 2) return true;
//    if (number % 2 == 0) return false;
//    for (int i = 3; i * i <= number; i += 2) {
//        if (number % i == 0) return false;
//    }
//    return true;
//}
//
//// DFS�� �̿��Ͽ� ��� ���� ������ �����ϴ� �Լ�
//void DFS(const string& numbers, string current) {
//    if (!current.empty()) {
//        if (find(generated.begin(), generated.end(), current) == generated.end()) {
//            generated.push_back(current);
//        }
//    }
//
//    for (size_t i = 0; i < numbers.size(); ++i) {
//        if (visited[i]) continue;
//        visited[i] = true;
//        DFS(numbers, current + numbers[i]);
//        visited[i] = false;
//    }
//}
//
//// �־��� ���� ������� ���� �� �ִ� �Ҽ��� ������ ã�� �Լ�
//int solution(string numbers) {
//    generated.clear();
//    visited = vector<bool>(numbers.size(), false);
//
//    // ��� ���� �������� �̿��Ͽ� ������ ��� ���� ����
//    DFS(numbers, "");
//
//    // �Ҽ��� ������ ���� ����
//    answer = 0;
//    for (const string& numStr : generated) {
//        if (numCheck(numStr)) {
//            ++answer;
//        }
//    }
//
//    return answer;
//}






//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <iostream>
//
//using namespace std;
//
//bool solution(vector<string> phone_book)
//{
//    unordered_map<string, bool> H_Table; // unordered_map :  <Key�� �ڷ���, �ڷ���> �̸�
//    for (const string& number : phone_book)
//    {
//        H_Table[number] = true;
//    }
//
//    for (const string& number : phone_book)
//    {
//        for (int i = 1; i < number.length(); ++i)
//        {
//            string _Text = number.substr(0, i);
//            if (H_Table.find(_Text) != H_Table.end() && _Text != number)
//            {
//                return false;
//            }
//        }
//
//    }
//    return true;
//}


#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> clothes_count;

    for (const auto& cloth : clothes)
    {
        string type = cloth[1]; // �ǻ� ������ 0�̾ƴ϶� 1�� ������ 0�� �ǻ��� ����..
        clothes_count[type]++;
    }

    int answer = 1;

    // ���� �ٸ��� ���հ��� ���..
    for (const auto& pair : clothes_count)
    {
        answer *= (pair.second + 1);
    }

    return answer - 1;
}




/*

#include <string>
#include <vector>

using namespace std;
// ���� = 1��������� ����..
// ���1 = 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, .......
// ���2 = 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
// ���3 = 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...
// ���� ���� ������ ��������� ����?(�迭)��Ƽ� return..

//�������..

//return�� �������� ����..
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    return answer;
}


*/