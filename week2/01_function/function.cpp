// 기능 개발

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
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
	auto ans = solution({93, 30, 55}, {1, 30, 5});

	print_vector<int>(ans); // 2 1
}
