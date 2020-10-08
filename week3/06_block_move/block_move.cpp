// 블록 이동하기

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board) {
	int answer = 0;
	return answer;
}

int main()
{
	vector<vector<int>> board1 = {
		{0, 0, 0, 1, 1},
		{0, 0, 0, 1, 0},
		{0, 1, 0, 1, 1},
		{1, 1, 0, 0, 1},
		{0, 0, 0, 0, 0}
	};

	cout << solution(board1) << endl;  // 7
}
