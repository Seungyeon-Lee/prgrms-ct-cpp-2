// 프린터

#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;

	queue <int> que;
	priority_queue <int> pq;

	for (int i = 0; i < priorities.size(); i++)
	{
		que.push(i);
		pq.push(priorities[i]);
	}

	while (!que.empty())
	{
		int size = que.size();
		while (size--)
		{
			int idx = que.front();
			que.pop();
			if (pq.top() == priorities[idx])
			{
				pq.pop();
				answer++;

				if (idx == location)
					return answer;
				else
					continue;
			}

			que.push(idx);
		}
	}

	return answer;
}

int main()
{
	cout << solution2({2, 1, 3, 2}, 2) << endl; // 1
	cout << solution2({1, 1, 9, 1, 1, 1}, 0) << endl; // 5
}
