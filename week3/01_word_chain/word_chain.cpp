// 영어 끝말잇기

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
	vector<int> answer;

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다. 
	cout << "Hello Cpp" << endl;

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
	auto ans1 = solution(3, {"tank", "kick", "know", "wheel",
		"land", "dream", "mother", "robot", "tank"});
	auto ans2 = solution(5, {"hello", "observe", "effect", 
		"take", "either", "recognize", "encourage", 
		"ensure", "establish", "hang", "gather", 
		"refer", "reference", "estimate", "executive"});
	auto ans3 = solution(2, {"hello", "one", "even", "never", 
		"now", "world", "draw"});

	print_vector<int>(ans1); // 3 3
	print_vector<int>(ans2); // 0 0
	print_vector<int>(ans3); // 1 3
}
