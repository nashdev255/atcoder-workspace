#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> tv;
  rep(i,N) {
    int t, v;
    cin >> t >> v;
    tv.emplace_back(pair<int, int>(t, v));
  }
  int res = 0, it = 0;
  for ( int t = 1; t <= 1e4; ++t ) {
    if ( t == tv[it].first ) {
      res += tv[it].second;
      ++it;
      if ( it == N ) break;
    }
    if ( res > 0 ) --res;
  }
  cout << res << endl;
  return 0;
}
