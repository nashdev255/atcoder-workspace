#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N), T(M);
  rep(i,N) cin >> S[i];
  rep(i,M) cin >> T[i];
  rep(i,N) reverse(S[i].begin(), S[i].end());
  rep(i,M) reverse(T[i].begin(), T[i].end());
  int res = 0;
  rep(i,N) {
    rep(j,M) {
      if ( S[i].substr(0, 3) == T[j] ) {
        ++res;
        break;
      }
    }
  }
  cout << res << endl;
  return 0;
}
