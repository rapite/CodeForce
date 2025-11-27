// 550A Two Substrings
// rapite
#include <inttypes.h>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;
int main() {
  string s;
  cin >> s;

  vector<int> AB;
  vector<int> BA;

  for (int r = 0; r < (int)s.size()-1; r++) {
    if (s[r] == 'A' && s[r+1] == 'B')
      AB.push_back(r);
  }

  for (int r = 0; r < (int)s.size()-1; r++) {
    if (s[r] == 'B' && s[r+1] == 'A')
      BA.push_back(r);
  }
  
  bool y = false;
  for (int i = 0; i < (int)AB.size(); i++) {
    auto it = lower_bound(BA.begin(), BA.end(), AB[i]+2);
    if (it != BA.end()) {
      if (*it > AB[i]+1)
        y = true;
    }
  }
  for (int i = 0; i < (int)BA.size(); i++) {
    auto it = lower_bound(AB.begin(), AB.end(), BA[i]+2);
    if (it != AB.end()) {
      if (*it > BA[i]+1)
        y = true;
    }
  }
  if (y) cout << "YES"; else cout << "NO";
}
