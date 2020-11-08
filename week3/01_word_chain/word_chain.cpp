// 영어 끝말잇기

#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
	vector<int> answer(2, 0);
	unordered_set <string> m;

	char cur = words[0].back();
	m.insert(words[0]);
	for (int i = 1; i < words.size(); i++)
	{
		if (cur == words[i][0] && m.find(words[i]) == m.end())
		{
			m.insert(words[i]);
			cur = words[i].back();
		}
		else {
			answer[0] = i % n + 1;
			answer[1] = i / n + 1;
			return answer;
		}
	}

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
