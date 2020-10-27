// 네트워크

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool visited[201];

void dfs(vector<vector<int>>& adj, int n, int idx) {
	for (int i = 0; i < n; i++)
		if (adj[idx][i] == 1 && !visited[i])
		{
			visited[i] = true;
			dfs(adj, n, i);
		}
}

int solution(int n, vector<vector<int>> computers) {
	int answer = 0;

	for (int i = 0; i < n; i++)
		if (!visited[i])
		{
			visited[i] = true;
			dfs(computers, n, i);
			answer++;
		}

	return answer;
}

int main()
{
	cout << solution2(3, {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}}) << endl; // 2
	cout << solution2(3, {{1, 1, 0}, {1, 1, 1}, {0, 1, 1}}) << endl; // 1
}
