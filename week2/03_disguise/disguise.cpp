// ¿ß¿Â

#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	set <string> types;

	for (int i = 0; i < clothes.size(); i++)
		types.insert(clothes[i][1]);

	int sum = 0;
	for (string type : types)
	{
		for (int k = 0; k < clothes.size(); k++)
			if (clothes[k][1] == type)
				sum++;

		answer *= (sum + 1);
		sum = 0;
	}

	answer--;

	return answer;
}

int main()
{
	vector<vector<string>> clothes1 = {
		{"yellow_hat", "headgear"},
		{"blue_sunglasses", "eyewear"},
		{"green_turban", "headgear"}
	};

	vector<vector<string>> clothes2 = {
		{"crow_mask", "face"},
		{"blue_sunglasses", "face"},
		{"smoky_makeup", "face"}
	};

	cout << solution(clothes1) << endl; // 5
	cout << solution(clothes2) << endl; // 3
}