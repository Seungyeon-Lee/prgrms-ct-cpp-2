// 등굣길

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int map[101][101] = { 0, };
    int dp[101][101] = { 0, };

    for (auto puddle : puddles)
        map[puddle[0]][puddle[1]] = -1;

    dp[0][1] = 1;

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (map[i][j] == -1)
                dp[i][j] = 0;
            else
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000007;

    return dp[m][n];
}

int main()
{
	cout << solution(4, 3, {{2, 2}}) << endl; // 4
}
