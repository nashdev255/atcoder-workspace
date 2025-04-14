#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> bulbs(M);
  vector<int> p(M);
  rep(i,M) {
    int k;
    cin >> k;
    rep(j,k) {
      int s;
      cin >> s;
      bulbs[i].emplace_back(s);
    }
  }
  rep(i,M) cin >> p[i];
  int res = 0;
  for ( int bit = 0; bit < (1<<N); ++bit ) {
    vector<bool> switches(N, false);
    for ( int i = 0; i < N; ++i ) {
      if ( bit & (1<<i) ) switches[i] = true;
    }
    int numberOfbulbsOn = 0;
    for ( int i = 0; i < M; ++i ) {
      int numberOfSwitchesOn = 0;
      for ( auto& s : bulbs[i] ) {
        if ( switches[s-1] ) ++numberOfSwitchesOn;
      }
      if ( numberOfSwitchesOn%2 == p[i] ) ++numberOfbulbsOn;
    }
    if ( numberOfbulbsOn == bulbs.size() ) ++res;
  }
  cout << res << endl;
  return 0;
}
