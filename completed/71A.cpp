#include <iostream>
#include <string>
using namespace std;
int main() {
	int i;
	cin >> i;
	for (int j = 0; j < i; j++) {
		string s;
		cin >> s;
		if (s.length() > 10)
			cout << s[0] << s.length()-2 << s[s.length()-1] << '\n';
		else
			cout << s <<'\n';
	}
}
