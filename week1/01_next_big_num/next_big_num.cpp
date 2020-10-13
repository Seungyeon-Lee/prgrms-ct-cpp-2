// 다음 큰 숫자

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int getBin(int n) {
    int sum = 0;
    int temp = n;
    
    while(temp) {
        sum += temp % 2;
        temp /= 2;
    }
    
    return sum;
}

int solution(int n) {
    int answer = n;
    
    int binary_count = getBin(n);
    
    while(true) {
        answer++;
        if(getBin(answer) == binary_count)
            break;
    }
    
    return answer;
}

int main()
{
	cout << solution(78) << endl; // 83
	cout << solution(15) << endl; // 23
}
