// 체육복

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = n - lost.size();

	sort(lost.begin(), lost.end());
	sort(reserve.begin(), reserve.end());

	for (int i = 0; i < lost.size(); i++)
		for (int k = 0; k < reserve.size(); k++)
			if (lost[i] == reserve[k])
			{
				reserve[k] = -1; // 만약 여벌의 체육복이 있는 학생이 도난 당한 경우
				lost[i] = -1;
				answer++;
				break;
			}

	for (int i = 0; i < lost.size(); i++)
		for (int k = 0; k < reserve.size(); k++)
			if (abs(lost[i] - reserve[k]) == 1) // 앞 뒷번호의 학생인 경우
			{
				lost[i] = -1;
				reserve[k] = -1;
				answer++;
				break;
			}

	return answer;
}

int main()
{
	cout << solution(5, {2, 4}, {1, 3, 5}) << endl; // 5
	cout << solution(5, {2, 4}, {3}) << endl; // 4
	cout << solution(3, {3}, {1}) << endl; // 2
}
