// 완주하지 못한 선수

#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

	string answer = "";

	unordered_map <string, int> m;

	for (string& p : participant)
		m[p]++;

	for (string& c : completion)
		m[c]--;

	for (auto& res : m)
		if (res.second == 1)
		{
			answer = res.first;
			break;
		}

	return answer;
}

int main()
{
	vector<string> participant1 {"leo", "kiki", "eden"};
	vector<string> participant2 {"marina", "josipa", "nikola", "vinko", "filipa"};
	vector<string> participant3 {"mislav", "stanko", "mislav", "ana"};

	vector<string> completion1 {"eden", "kiki"};
	vector<string> completion2 {"josipa", "filipa", "marina", "nikola"};
	vector<string> completion3 {"stanko", "ana", "mislav"};

	string str1 = solution(participant1, completion1);
	string str2 = solution(participant2, completion2);
	string str3 = solution(participant3, completion3);

	cout << str1 << endl; // leo
	cout << str2 << endl; // vinko
	cout << str3 << endl; // mislav
}
