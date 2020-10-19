// 주식 가격

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
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
	auto ans = solution({1, 2, 3, 2, 3});

	print_vector<int>(ans); // 4, 3, 1, 1, 0
}
