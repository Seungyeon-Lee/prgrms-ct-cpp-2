// 자물쇠와 열쇠
// https://tech.kakao.com/2019/10/02/kakao-blind-recruitment-2020-round1/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
	bool answer = true;
	return answer;
}

int main()
{
	vector<vector<int>> key1 = {
		{0, 1, 0},
		{1, 0, 0},
		{0, 1, 1}
	};

	vector<vector<int>> lock1 = {
		{1, 1, 1},
		{1, 1, 0},
		{1, 0, 1}
	};

	cout << solution(key1, lock1) << endl;  // true
}
