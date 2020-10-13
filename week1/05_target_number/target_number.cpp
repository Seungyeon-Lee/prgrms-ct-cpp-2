// 타겟 넘버

#include <string>
#include <vector>
#include <iostream>

using namespace std;
int temp;

void check(vector<int> numbers, int target, int idx, int sum) {
    if(idx == numbers.size())
    {
        if(sum == target)
            temp++;
        
        return;
    }
    
    check(numbers, target, idx + 1, sum + numbers[idx]);
    check(numbers, target, idx + 1, sum - numbers[idx]);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    check(numbers, target, 0, 0);
    answer = temp;
    
    return answer;
}

int main()
{
	cout << solution({1, 1, 1, 1, 1}, 3) << endl; // 5
}
