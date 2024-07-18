#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

//int N = 0;
//int M = 0;
//vector<int> v;
//vector<vector<int>> sub;
//void Input()
//{
//    cin >> N;
//    cin >> M;
//
//    v.reserve(N);
//    sub.reserve(M);
//
//    for (int i = 0; i < N; i++)
//    {
//        int temp = 0;
//        cin >> temp;
//        v.push_back(temp);
//    }
//
//    for (int j = 0; j < M; j++)
//    {
//        vector<int> temp;
//        int a = 0;
//        int b = 0;
//        cin >> a;
//        cin >> b;
//
//        temp.push_back(a);
//        temp.push_back(b);
//       
//
//        sub.push_back(temp);
//    }
//
//}
//vector<int> sumArr;
//void CreateSumArr()
//{
//    sumArr.reserve(N);
//    sumArr.push_back(v[0]);
//
//    for (int i = 0; i < N - 1; i++)
//    {
//        int temp = sumArr[i] + v[i + 1];
//        sumArr.push_back(temp);
//    }
//}
//
//int main()
//{
//    Input();
//    CreateSumArr();
//
//    for (int i = 0; i < M; i++)
//    {
//        int a = sub[i][0];
//        int b = sub[i][1];
//        if (a == 1)
//            cout << sumArr[b - 1] << "\n";
//        else
//            cout << sumArr[b - 1] - sumArr[a - 2] << "\n";
//    }
//
//    return 0;
//}

//// ���� = ������ 1912������
//int N = 0;
//vector<int> input;
//vector<int> cache;
//
//void Input()
//{
//   cin >> N;
//   cache = vector<int>(N, -1);
//
//   for (int i = 0; i < N; i++)
//   {
//       int temp = 0;
//       cin >> temp;
//
//       input.push_back(temp);
//   }
//}
// 
//int sequenceAdd(int index)
//{
//    //��������
//    if (index == N - 1)
//        return input[index];
//
//    // �޸������̼�
//    int& ref = cache[index];
//    if (ref != -1001)
//        return ref;
//
//    //���ϱ�
//    int result = input[index];
//    result = max(result, result + sequenceAdd(index + 1));
//    ref = result;
//
//    return ref;
//}
//
//int main()
//{
//    Input();
//
//    int result = -1001;
//    for (int i = 0; i < N; i++)
//    {
//        result = max(result, sequenceAdd(i));
//    }
//    cout << result << endl;
//    return 0;
//}






//n�� �Ǻ���ġ ���� ���� ��� �ڵ�1 �ڵ�2 ���� Ƚ���� ���
// �Ǻ���ġ ���ȣ�� 1, �������α׷��� 2 �� �� Ƚ���� ��º�.


int N;
vector<int> cache;

int callcount_1 = 0;
int callcount_2 = 0;

void Input()
{
    cin >> N;
    cache.resize(N + 1, -1);
}

// ��� ȣ���� �̿��� �Ǻ���ġ �� ���
int calculate_1(int n)
{
    callcount_1++;
    if (n == 0 || n == 1)
        return 1;

    return calculate_1(n - 1) + calculate_1(n - 2);
}

int calculate_2(int n)
{
    callcount_2++;
    if (n == 0 || n == 1)
        return 1;

    if (cache[n] != -1)
        return cache[n];

    int result = calculate_2(n - 1) + calculate_2(n - 2);
    cache[n] = result;
    return result;
}

    
int main()
{
   
    Input();
   
    calculate_1(N);
    calculate_2(N);

   
    cout << callcount_1 << " " << callcount_2 << "\n";

    return 0;
}







// �Է��� �� ���� a, b, c�� �̷���� ������, �� �ٿ� �ϳ��� �־�����. 
// �Է��� �������� -1 -1 -1�� ��Ÿ����, �� ������ ��� -1�� ���� �Է��� �������� �����ϸ� ����.

// �Է����� �־��� ������ a, b, c�� ���ؼ�, w(a, b, c)�� ����Ѵ�.
//
//vector<vector<int>> input;
//int N;
//
//void Input()
//{
//	while (true)
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		cin >> a;
//		cin >> b;
//		cin >> c;
//
//		if (a == -1 && b == -1 && c == -1)
//			break;
//
//		vector<int> temp = { a,b,c };
//		input.push_back(temp);
//	}
//
//	N = input.size();
//}
//
//int cache[100][100][100];
//
//int w(int a, int b, int c)
//{
//	if (a <= 0 || b <= 0 || c <= 0)
//		return 1;
//	if (a > 20 || b > 20 || c > 20)
//		return w(20, 20, 20);
//
//	int& ref = cache[a][b][c];
//	if (ref != -1)
//		return ref;
//
//	if (a < b && b < c)
//		return ref = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
//	else
//		return ref = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
//}
//
//
//
//int main()
//{
//    for (int i = 0; i < 100; i++)
//    {
//        for (int j = 0; j < 100; j++)
//        {
//            for (int k = 0; k < 100; k++)
//                cache[i][j][k] = -1;
//        }
//    }
//
//    Input();
//
//    for (auto v : input)
//    {
//        printf("w(%d,%d,%d) = %d \n", v[0], v[1], v[2], w(v[0], v[1], v[2]));
//    }
//
//    return 0;
//}






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

//
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int solution(vector<vector<string>> clothes) {
//    unordered_map<string, int> clothes_count;
//
//    for (const auto& cloth : clothes)
//    {
//        string type = cloth[1]; // �ǻ� ������ 0�̾ƴ϶� 1�� ������ 0�� �ǻ��� ����..
//        clothes_count[type]++;
//    }
//
//    int answer = 1;
//
//    // ���� �ٸ��� ���հ��� ���..
//    for (const auto& pair : clothes_count)
//    {
//        answer *= (pair.second + 1);
//    }
//
//    return answer - 1;
//}
//



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