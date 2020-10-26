// 전화번호 목록

#include <string>
#include <vector>
#include <string.h>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;

	for (int i = 0; i < phone_book.size(); i++)
		for (int j = i + 1; j < phone_book.size(); j++)
		{
			int size = (phone_book[j].size() > phone_book[i].size()) ? phone_book[i].size() : phone_book[j].size();

			if (!strncmp(phone_book[j].c_str(), phone_book[i].c_str(), size))
				return false;
		}

	return answer;
}

int main()
{
	vector<string> phone_book1 = {"97674223", "119", "1195524421"};
	vector<string> phone_book2 = {"123","456","789"};
	vector<string> phone_book3 = {"12","123","1235","567","88"};

	cout << solution6(phone_book1) << endl; // false
	cout << solution6(phone_book2) << endl; // true
	cout << solution6(phone_book3) << endl; // false
}
