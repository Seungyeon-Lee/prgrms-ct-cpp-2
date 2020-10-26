// 주식 가격

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(), 0);

    for (int i = 0; i < prices.size(); i++)
        for (int j = i + 1; j < prices.size(); j++)
        {
            if (prices[i] <= prices[j])
                answer[i]++;
            else
            {
                answer[i]++;
                break;
            }
        }

    return answer;
}

template<typename T>
void print_vector(vector<T> v)
{
	for (auto a : v)
		cout << a << " ";
	cout << endl;
}

int main()
{
	auto ans = solution2({1, 2, 3, 2, 3});

	print_vector<int>(ans); // 4, 3, 1, 1, 0
}
