// K번째수

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i = 0; i<commands.size(); i++)
    {
        int n1 = commands[i][0] - 1;
        int n2 = commands[i][1];
        int idx = 0;
        
        vector<int> split_arr(array.begin() + n1, array.begin() + n2);
        
        for(int j = n1; j<n2; j++)
            split_arr[idx++] = array[j];
        
        sort(split_arr.begin(), split_arr.end());
        
        answer.push_back(split_arr[commands[i][2] - 1]);
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
    auto ans = solution({1, 5, 2, 6, 3, 7, 4},
        {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}});

    print_vector<int>(ans); // 5 6 3
}
