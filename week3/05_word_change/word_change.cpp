// 단어 변환

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string begin, string target, vector<string> words) {
	int answer = 0;
	return answer;
}

int main()
{
	vector<string> words1 = {"hot", "dot", "dog", "lot", "log", "cog"};
	vector<string> words2 = {"hot", "dot", "dog", "lot", "log"};

	cout << solution2("hit", "cog", words1) << endl; // 4
	cout << solution2("hit", "cog", words2) << endl; // 0
}
