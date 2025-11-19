// 
// rapite
#include <inttypes.h>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main() {
	int n,a,b,c;
	a=0;b=0;c=0;
	cin >> n;
	for (int i = 0; i < n;i++) {
		int t1,t2,t3;
		cin >> t1>> t2>> t3;
		a+=t1;
		b+=t2;
		c+=t3;
	}
	if (a == 0 && b == 0 && c == 0) {
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
