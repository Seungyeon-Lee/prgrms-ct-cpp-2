// 괄호 변환

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string p) {
	string answer = "";
	return answer;
}

int main()
{
	cout << solution("(()())()") << endl;   // "(()())()"
	cout << solution(")(") << endl;         // "()"
	cout << solution("()))((()") << endl;   // "()(())()"
}
