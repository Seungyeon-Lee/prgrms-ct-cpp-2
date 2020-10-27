// 단어 변환

#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

bool visited[51];

bool isPossible(string st, string ed) {

	int n = 0;
	for (int i = 0; i < st.size(); i++)
	{
		if (st[i] != ed[i])
			n++;

		if (n > 1)
			return false;
	}

	return true;
}

int solution(string begin, string target, vector<string> words) {
	int answer = 0;
	bool flag = false;

	for (int i = 0; i < words.size(); i++)
		if (target == words[i])
			flag = true;

	if (!flag)
		return 0;

	queue <pair<string, int>> que;
	for (int i = 0; i < words.size(); i++)
		if (isPossible(begin, words[i]))
		{
			que.push({ words[i], 1 });
			visited[i] = true;
		}

	while (!que.empty())
	{
		string st = que.front().first;
		int n = que.front().second;
		que.pop();

		for (int i = 0; i < words.size(); i++)
			if (isPossible(st, words[i]) && !visited[i])
			{
				que.push({ words[i], n + 1 });
				visited[i] = true;
			}

		if (st == target)
		{
			answer = n;
			break;
		}
	}

	return answer;
}

int main()
{
	vector<string> words1 = {"hot", "dot", "dog", "lot", "log", "cog"};
	vector<string> words2 = {"hot", "dot", "dog", "lot", "log"};

	cout << solution2("hit", "cog", words1) << endl; // 4
	cout << solution2("hit", "cog", words2) << endl; // 0
}
