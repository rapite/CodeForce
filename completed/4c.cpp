// 4c 11/19/25
// rapite
#include <inttypes.h>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;
int main() {
	map<string, int> m{};
	int n;
	cin >> n;
	
	string newname;
	for (int i = 0; i < n; i++) {
		cin >> newname;
		if (!m.count(newname)) {
			m[newname]++;
			cout << "OK\n";
		} else {
			cout << newname << m[newname] << '\n';
			m[newname]++;
		}
	}
}
