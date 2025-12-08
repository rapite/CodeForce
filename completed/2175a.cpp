// 2175a Little Fairy's Painting
// rapite
#include <inttypes.h>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;
int main() {
	long long t, n, a;
	cin >> t;

	for (int i = 0; i < t; i++){
	cin >> n;
	set<long long> s;
	
	for (int j = 0; j < n; j++) {
		cin >> a;
		s.insert(a);
	}
	long long d = s.size();

	auto m = s.lower_bound(s.size());

	cout << *m << '\n';
	}
}
