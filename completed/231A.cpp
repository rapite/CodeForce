// 231A - Team
// Andy Lee
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int counter = 0;
	for (int j = 0; j < n; j++) {
		int a,b,c;
		cin >>a >>b >> c;
		if (a+b+c >= 2) {
		       counter++;
		}		
	}
	cout<<counter;
}
