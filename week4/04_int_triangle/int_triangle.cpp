// 정수 삼각형

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> triangle) {
	int answer = 0;
	return answer;
}

int main()
{
	vector<vector<int>> triangle = {
		{7},
		{3, 8},
		{8, 1, 0},
		{2, 7, 4, 4},
		{4, 5, 2, 6, 5}
	};

	cout << solution(triangle) << endl; // 30
}
