#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  rep(i,N) cin >> S[i];
  vector<vector<bool>> T(N, vector<bool>(M));
  rep(i,N) rep(j,M) {
    if ( S[i][j] == 'o' ) T[i][j] = true;
    else T[i][j] = false;
  }
  int res = 1e9;
  for ( int bit = 0; bit < (1<<N); ++bit ) {
    int cnt = 0;
    bool isAllSet = true;
    vector<bool> subset(M, false);
    for ( int i = 0; i < N; ++i ) {
      if ( bit & (1<<i) ) {
        ++cnt;
        rep(j,M) subset[j] = subset[j] | T[i][j];
      }
    }
    rep(i,M) if ( !subset[i] ) isAllSet = false;
    if ( isAllSet ) res = min(res, cnt);
  }
  cout << res << endl;
  return 0;
}
