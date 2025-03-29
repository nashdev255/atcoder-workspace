#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> bulbs(M);
  vector<int> p(M);
  for ( auto& bulb : bulbs ) {
    int k;
    cin >> k;
    rep(i,k) {
      int s;
      cin >> s;
      bulb.emplace_back(s);
    }
  }
  rep(i,M) cin >> p[i];
  int ans = 0;
  for ( int bit = 0; bit < (1<<N); bit++ ) {
    int numberOfBulbLighted = 0;
    rep(i,M) {
      int numberOfSwitchesOn = 0;
      for ( auto& s : bulbs[i] ) {
        if ( bit & (1<<(s-1)) ) numberOfSwitchesOn++;
      }
      if ( numberOfSwitchesOn % 2 == p[i] ) numberOfBulbLighted++;
    }
    if ( numberOfBulbLighted == M ) ans++;
  }
  cout << ans << endl;
  return 0;
}
