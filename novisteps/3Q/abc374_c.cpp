#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> K(N);
  rep(i,N) cin >> K[i];
  ll res = 1e10;
  for ( int bit = 1; bit < (1<<N); ++bit ) {
    ll cntA = 0, cntB = 0;
    for ( int i = 0; i < N; ++i ) {
      if ( bit & (1<<i) ) cntA += K[i];
      else cntB += K[i];
    }
    const ll cnt = max(cntA, cntB);
    res = min(res, cnt);
  }
  cout << res << endl;
  return 0;
}
