// 괄호 변환

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool isPossible(string p) {
	int res = 0;

	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] == '(')
			res++;
		else
		{
			res--;
			if (res < 0)
				return false;
		}
	}

	return true;
}

string makeCorrect(string p) {
	if (p == "")
		return p;

	string u = "", v = "";
	int l = 0, r = 0;

	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] == '(')
			l++;
		else
			r++;

		if (l == r) {
			u = p.substr(0, i + 1);
			v = p.substr(i + 1);
			break;
		}
	}

	if (isPossible(u))
		return u + makeCorrect(v);
	else
	{
		string w = "(";
		w += makeCorrect(v) + ")";
		string x = u.substr(1, u.size() - 2);

		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] == '(')
				w += ')';
			else
				w += '(';
		}

		return w;
	}
}

string solution(string p) {
	return makeCorrect(p);
}

int main()
{
	cout << solution("(()())()") << endl;   // "(()())()"
	cout << solution(")(") << endl;         // "()"
	cout << solution("()))((()") << endl;   // "()(())()"
}
