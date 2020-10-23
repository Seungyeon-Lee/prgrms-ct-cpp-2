// 모의고사

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    // 1번 수포자 : 12345 반복
    // 2번 수포자 : 21232425 반복
    // 3번 수포자 : 3311224455 반복
    
    vector <vector<int>> person = {{1, 2, 3, 4, 5}, {2, 1, 2, 3, 2, 4, 2, 5}, {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
    
    vector <int> answer_count = {0, 0, 0};
    int max_answer = 0;
    
    for(int i = 0; i<answers.size(); i++)
    {
        if(person[0][i % person[0].size()] == answers[i])
            answer_count[0]++;
        if(person[1][i % person[1].size()] == answers[i])
            answer_count[1]++;
        if(person[2][i % person[2].size()] == answers[i])
            answer_count[2]++;
    }
    
    max_answer = *max_element(answer_count.begin(), answer_count.end());
    
    for(int i = 0; i<3; i++)
        if(max_answer == answer_count[i])
            answer.push_back(i + 1);
    
    return answer;
}

template<typename T>
void print_vector(vector<T> v)
{
    for (auto a : v)
        cout << a << " ";
    cout << endl;
}

int main()
{
    auto ans1 = solution({1, 2, 3, 4, 5});
    auto ans2 = solution({1, 3, 2, 4, 2});

    print_vector<int>(ans1); // 1
    print_vector<int>(ans2); // 1 2 3
}
