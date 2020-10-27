// 더 맵게

#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue <int, vector<int>, greater<int>> pq;

    for (int sc : scoville)
        pq.push(sc);

    while (pq.top() < K)
    {
        int first = pq.top();
        pq.pop();

        if (pq.empty())
            return -1;

        int second = pq.top();
        pq.pop();

        pq.push(first + (second * 2));
        answer++;
    }

    return answer;
}

int main()
{
	cout << solution({1, 2, 3, 9, 10, 12}, 7) << endl; // 2
}
