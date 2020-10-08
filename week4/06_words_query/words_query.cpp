// 가사 검색

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> words, vector<string> queries) {
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
	vector<string> words1 = {"frodo", "front", "frost", "frozen", "frame", "kakao"};
	vector<string> queries1 = {"fro??", "????o", "fr???", "fro???", "pro?"};

	auto ans1 = solution3(words1, queries1);

	print_vector<int>(ans1); // 3, 2, 4, 1, 0
}
