// 모의고사

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    // 1번 수포자 : 12345 반복
    // 2번 수포자 : 21232425 반복
    // 3번 수포자 : 3311224455 반복
    
    string person1 = "12345";
    string person2 = "21232425";
    string person3 = "3311224455";
    
    int answer_count[3] = {0, 0, 0};
    int p_size[3] = {(int)person1.size(), (int)person2.size(), (int)person3.size()};
    int max_answer = 0;
    
    for(int i = 0; i<answers.size(); i++) {
        if(person1[i % p_size[0]] - '0' == answers[i])
            answer_count[0]++;
         if(person2[i % p_size[1]] - '0' == answers[i])
            answer_count[1]++;
         if(person3[i % p_size[2]] - '0' == answers[i])
            answer_count[2]++;
        
        max_answer = max(max_answer, max(answer_count[0], max(answer_count[1], answer_count[2])));
    }
    
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
