#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> F(N, vector<int>(10)), P(N, vector<int>(11));
  rep(i,N) rep(j,10) cin >> F[i][j];
  rep(i,N) rep(j,11) cin >> P[i][j];
  ll res = -1e10;
  for ( int bit = 1; bit < (1<<10); ++bit ) {
    ll profit = 0;
    rep(i,N) {
      int cnt = 0;
      rep(j,10) {
        if ( ( bit & (1<<j) ) && F[i][j] == 1 ) ++cnt;
      }
      profit += P[i][cnt];
    }
    res = max(res, profit);
  }
  cout << res << endl;
  return 0;
}
