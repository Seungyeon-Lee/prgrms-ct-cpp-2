// 영어 끝말잇기

#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
	vector<int> answer;
	answer.resize(2);
	unordered_map <string, bool> m;

	char cur = words[0][words[0].size() - 1];
	m[words[0]] = true;
	for (int i = 1; i < words.size(); i++)
	{
		if (cur == words[i][0] && !m[words[i]])
		{
			m[words[i]] = true;
			cur = words[i][words[i].size() - 1];
		}
		else {
			answer[0] = i % n + 1;
			answer[1] = i / n + 1;
			return answer;
		}
	}

	answer[0] = answer[1] = 0;

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
