// 545c - woodcutters
// rapite
#include <inttypes.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cctype>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	if (n <= 2) {
		cout << n << "\n";
		return 0;
	}

	int counter = 1;
	int prev = v[0].first;
	for (int i = 1; i < n-1; i++) {
		const auto &[coordinate, height] = v[i];
		if (coordinate-height > prev) {
			prev = coordinate;
			counter++;
		}
		else if (coordinate + height < v[i+1].first) {
			prev = coordinate + height;
			counter++;
		}
		else {
			prev = coordinate;
		}
	}
	counter++;
	cout << counter << "\n";
	return 0;
}
