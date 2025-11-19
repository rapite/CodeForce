// 25a 11/19/25
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
	int n;
	cin >> n;
	
	int co = 0;
	int ce = 0;
	int lo = 0;
	int le = 0;

	for (int i =0; i < n;i++) {
		int j;
		cin >>j;
		if (j%2==0) {
			le = i +1;
			ce++;
		} else {
			lo = i+1;
			co++;
		}
	}
	if (co == 1) {
		cout << lo;
	} else {
		cout << le;
	}
}
