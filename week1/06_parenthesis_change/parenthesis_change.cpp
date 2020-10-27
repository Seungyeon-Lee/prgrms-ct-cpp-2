// 괄호 변환
// https://tech.kakao.com/2019/10/02/kakao-blind-recruitment-2020-round1/

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
