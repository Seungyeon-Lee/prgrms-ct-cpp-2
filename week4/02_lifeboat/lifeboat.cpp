// 구명보트

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


int solution(vector<int> people, int limit) {
    int answer = 0;

    sort(people.begin(), people.end());
    int pivot = 0;
    int i = people.size() - 1;

    while (i >= pivot)
    {
        if (people[i] + people[pivot] <= limit)
        {
            answer++;
            pivot++;
        }
        else
            answer++;

        i--;
    }

    return answer;
}

int main()
{
	cout << solution({70, 50, 80, 50}, 100) << endl; // 3
	cout << solution({70, 80, 50}, 100) << endl; // 3
}
