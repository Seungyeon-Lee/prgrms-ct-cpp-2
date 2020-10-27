// 자물쇠와 열쇠

#include <string>
#include <vector>
#include <iostream>

using namespace std;

void rotateKey(vector<vector<int>>& key) {

	vector<vector<int>> temp(key);

	for (int i = 0; i < temp.size(); i++)
		for (int j = 0; j < temp.size(); j++)
			key[i][j] = temp[j][key.size() - i - 1];
}

bool checkKey(int r, int c, int n, vector<vector<int>>& key, vector<vector<int>> map) {

	for (int i = r; i < r + key.size(); i++)
		for (int j = c; j < c + key.size(); j++)
			map[i][j] += key[i - r][j - c];

	for (int i = key.size() - 1; i < n + key.size() - 1; i++)
		for (int j = key.size() - 1; j < n + key.size() - 1; j++)
			if (map[i][j] != 1) return false;

	return true;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
	bool answer = false;

	int N = int(lock.size() + (key.size() - 1) * 2);

	vector<vector<int>> map(N, vector<int>(N, 0));

	for (int i = key.size() - 1; i < lock.size() + key.size() - 1; i++)
		for (int j = key.size() - 1; j < lock.size() + key.size() - 1; j++)
			map[i][j] = lock[i - (key.size() - 1)][j - (key.size() - 1)];


	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < N - (key.size() - 1); j++)
			for (int k = 0; k < N - (key.size() - 1); k++)
				if (checkKey(j, k, lock.size(), key, map))
					return true;

		rotateKey(key);
	}

	return answer;
}

int main()
{
	vector<vector<int>> key1 = {
		{0, 1, 0},
		{1, 0, 0},
		{0, 1, 1}
	};

	vector<vector<int>> lock1 = {
		{1, 1, 1},
		{1, 1, 0},
		{1, 0, 1}
	};

	cout << solution(key1, lock1) << endl;  // true
}
