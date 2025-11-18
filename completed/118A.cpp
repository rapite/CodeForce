// 118A String Task
// rapite
#include <inttypes.h>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main() {
	string res, input;
	cin >> input;
	for (auto c : input) {
		auto is_vowel = [](char b) {
			char c = tolower(b);
			if (c == 'a' || c == 'e' || c=='i' || c=='o'||c=='u'||c=='y')
				return true;
			return false;
		};
		if (is_vowel(c))
			continue;
		else {
			res += ".";
			res += tolower(c);
		}
	}
	cout << res;
}
