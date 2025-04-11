#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<string> S(N);
  rep(i,N) cin >> S[i];
  int res = 0, consecutive = 0;
  rep(i,D) {
    bool isAllPersonFree = true;
    rep(j,N) {
      if ( S[j][i] == 'x' ) isAllPersonFree = false;
    }
    if ( isAllPersonFree ) ++consecutive;
    else {
      res = max(res, consecutive);
      consecutive = 0;
    }
    if ( i == D-1 ) res = max(res, consecutive);
  }
  cout << res << endl;
  return 0;
}
