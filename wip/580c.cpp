// 580c
// rapite
#include <inttypes.h>
#include <cmath>
#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

vector<int> catv;
vector<pair<int,int>> xy;

int n, m;
int res =0;

void dfs(int v, int point, int k) {
  if (catv[v])
    k++;
  else
    k=0;

  if (k > m)
    return;

  if (xy[v].size()==1 && v != 1)
    res++;

  for (auto j: xy[v]) {
      if (j.first == previous) continue;

      dfs(j.second, v, k);
  }
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    catv.push_back(c);
  }

  for (int i = 0; i < n; i++) {
    int x,y;
    cin >> x >> y;
    xy.push_back({x,y});
  }

  cout << dfs(0, -1, catv[0]) << '\n';
}
