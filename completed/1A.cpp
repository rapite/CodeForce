// 1A 11/13/25
// rapite
#include <inttypes.h>
#include <cmath>
#include <iostream>
using namespace std;
int main() {
	int64_t n,m,a;
	cin >> n >> m >> a;
	int64_t s1 = (n + a - 1)/a;
	int64_t s2 = (m + a - 1)/a;
	cout << s1*s2;
}
