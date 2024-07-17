//#include <iostream>
//#include <string>
//#include <vector>
//// 완전탐색 피로도..
//using namespace std;
//
//int answer = 0;
//vector<vector<int>> d;
//vector<bool> visited;
//
//void DFS(int here, int k, int count)
//{
//    // 필요도가 k보다 낮다라는 전제
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
//        // 처음 방문하기 전에 필요도가 k보다 높을경우 다음 것.
//        if (needK > k) continue;
//        DFS(i, k, 1);
//
//    }
//}
//
//int solution(int k, vector<vector<int>> dungeons) {
//    d = dungeons; // 스펠링 길어서 d...
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
//// 재귀를 이용하여 모든 숫자 조합을 생성하는 함수
//void generateNumbers(string current, string remaining, unordered_set<int>& generated) {
//    // 현재 조합이 비어있지 않으면 숫자로 변환하여 저장
//    if (!current.empty()) {
//        generated.insert(stoi(current));
//    }
//
//    // 남은 숫자들을 하나씩 추가하면서 재귀 호출
//    for (size_t i = 0; i < remaining.size(); ++i) {
//        generateNumbers(current + remaining[i], remaining.substr(0, i) + remaining.substr(i + 1), generated);
//    }
//}
//
//// 주어진 숫자 조각들로 만들 수 있는 소수의 개수를 찾는 함수
//int solution(string numbers) {
//    unordered_set<int> generated;
//    generateNumbers("", numbers, generated);
//
//    int answer = 0;
//    // 생성된 숫자들을 검사하여 소수인지 판별
//    for (int number : generated) {
//        if (isPrime(number)) {
//            ++answer;
//        }
//    }
//
//    return answer;
//}





////옹알이
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
//// 총 64가지 단어. 만들수 있음
//void DFS(int here, string word)
//{
//    //// 기저사항 굳이 할필요는 없음.. 밑에서 visited[here]에서 끝나면 종료되기때문에.
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
//    //방문을 푸는곳(중복)
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
//// 소수 여부를 판별하는 함수
//bool numCheck(const string& numStr) {
//    if (numStr.empty()) return false;
//    if (numStr == "1" || numStr == "0") return false;
//
//    // 숫자 문자열을 정수로 변환 없이 직접 소수 판별
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
//// DFS를 이용하여 모든 숫자 조합을 생성하는 함수
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
//// 주어진 숫자 조각들로 만들 수 있는 소수의 개수를 찾는 함수
//int solution(string numbers) {
//    generated.clear();
//    visited = vector<bool>(numbers.size(), false);
//
//    // 모든 숫자 조각들을 이용하여 가능한 모든 조합 생성
//    DFS(numbers, "");
//
//    // 소수인 조합의 개수 세기
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
//    unordered_map<string, bool> H_Table; // unordered_map :  <Key값 자료형, 자료형> 이름
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
        string type = cloth[1]; // 의상 종류는 0이아니라 1에 들어가있음 0은 의상의 종류..
        clothes_count[type]++;
    }

    int answer = 1;

    // 서로 다른옷 조합갯수 계산..
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
// 정답 = 1번사람문제 패턴..
// 사람1 = 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, .......
// 사람2 = 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
// 사람3 = 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...
// 가장 많은 문제를 맞힌사람이 누구?(배열)담아서 return..

//사람부터..

//return값 오름차순 정렬..
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    return answer;
}


*/