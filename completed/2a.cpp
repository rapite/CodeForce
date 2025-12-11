// 
// rapite
#include <inttypes.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <climits>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cctype>
using namespace std;
int main() {
	unordered_map<string, int> scores;
	vector<pair<string, int>> rounds;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name;
		int score;
		cin >> name >> score;
		scores[name] += score;
		rounds.emplace_back(name, score);
	}

	int m = INT_MIN;
	for (auto &p : scores)
		m = max(m, p.second);

	unordered_set<string> candidates;
	for (auto &p : scores) {
		if (p.second == m)
			candidates.insert(p.first);	
	}

	unordered_map<string, int> s;
	for (auto &[name, score] : rounds) {
		s[name] += score;
		if (s[name] >= m && candidates.count(name)) {
			cout << name;
			return 0;
		}
	}

}
