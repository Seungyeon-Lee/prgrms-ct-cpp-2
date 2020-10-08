// 모의고사

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
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
