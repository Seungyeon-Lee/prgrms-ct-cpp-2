// 정수 삼각형

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int dp[501][501] = { 0, };
    answer = dp[0][0] = triangle[0][0];

    for (int i = 1; i < triangle.size(); i++)
        for (int j = 0; j <= i; j++) 
        {
            // 왼쪽
            if (j == 0)
                dp[i][j] = dp[i - 1][j] + triangle[i][j];
            // 오른쪽
            else if (j == i)
                dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
            // 중간
            else
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];

            answer = max(answer, dp[i][j]);
        }

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
