// K번째수

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
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
    auto ans = solution({1, 5, 2, 6, 3, 7, 4},
        {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}});

    print_vector<int>(ans); // 5 6 3
}
