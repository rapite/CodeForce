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
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cctype>
using namespace std;
bool comp(const string& s, const string& t) {
	int f1[26] = {0};
	int f2[26] = {0};

	for (char c : s) f1[(unsigned char)tolower(c)]++;
	for (char c : t) f2[(unsigned char)tolower(c)]++;

	for (int i = 0; i < 26; i++) {
		if (f1[i] > f2[i])
			return false;
	}
	return true;
}
int main() {
	string A = "dcbe";
	string B = "bedbaecfc";

	cout << (comp(A, B) ? "YES" : "NO") << "\n";
}
