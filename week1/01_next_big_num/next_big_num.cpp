// 다음 큰 숫자

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int getBin(int n) {
    int sum = 0;
    
    while(n) {
        sum += (n & 1);
        n >>= 1;
    }
    
    return sum;
}

int solution(int n) {
    
    int binary_count = getBin(n);
    n++;
    
    while(getBin(n) != binary_count)
        n++;
    
    return n;
}

int main()
{
	cout << solution(78) << endl; // 83
	cout << solution(15) << endl; // 23
}
