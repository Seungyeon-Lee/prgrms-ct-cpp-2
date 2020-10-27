// ����

#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	unordered_map <string, int> types;

	for (auto& clothe : clothes)
		types[clothe[1]]++;

	for (auto& type : types)
		answer *= (type.second + 1);

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