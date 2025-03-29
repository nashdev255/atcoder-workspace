#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> G(N);
  int cnt = 0;
  for ( int i = 0; i < M; i++ ) {
    int u, v;
    cin >> u >> v;
    if ( u == v ) {
      cnt++;
      continue;
    }
    if ( count(G[u-1].begin(), G[u-1].end(), v) ) {
      cnt++;
      continue;
    }
    G[u-1].emplace_back(v);
    G[v-1].emplace_back(u);
  }
  cout << cnt << endl;
  return 0;
}
